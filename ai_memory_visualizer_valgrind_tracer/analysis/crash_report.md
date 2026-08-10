# Crash Report

Thie report details the findings after analysis of the 'crash_example.c' program , compiled with -g flags and analysed with valgrind

## sequence of the crash 

1. line 24: 'int \*nums = NULL;' Here a pointer to an int is declared.
2. line 25: 'n = 0' Here the future 'size' of the array of Int's is defined as zero this is the first 'error'
3. line 30: 'nums = allocate_numbers(n);' Here the allocation function is called with the pointer to nums & a zero value for the number required.
4. line  9: 'if (n <= 0)' Here the passing of a zero value causes the allocate numbers function to return NULL, the array arr is not malloc'd
5. line 32: 'nums[0] = 42;' Here the first value of a hypothetical array is attempted to be set. It does not exist, and this results in a seg fault & crash

## Root Cause Analysis

1. The invalid memory access that causes the crash is the attempt to assign a value to an array that was not checked to exist. - line 32
2. This issues involves stack memory, A heap allocation is never made due to the '0' size array request returning NULL

## Ai proposals & responses
 
1. i tried a few different ai models, and each model did appear to correctly identify the cause of the segmentation fault as an attempt to set a value using a null pointer
2. one example of a 'defensive fix' provided by chatgpt is pasted below;

'int \*data = malloc(n \* sizeof(int));'
'if (data == NULL) {'
'    perror("malloc");'
'    return 1;'
'}'

I made this change and compiled the new program.
while it does prevent the segfault, it doesn't address the root cause

A better solution might be to choose a value for n that is not zero, 
Although this program has been especially crafted to cause a seg fault,

a more comprehensive solution might involve checking if nums is a NULL pointer, and if so, 
calling the allocate numbers again with a value for n that is inclusive of the value you wish to store

