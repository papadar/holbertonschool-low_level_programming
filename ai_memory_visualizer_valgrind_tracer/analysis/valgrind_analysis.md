# Valgrind Analysis

Analysis of valgrind output from `crash_example.c`, `heap_example.c`, `stack_example.c`, and `aliasing_example.c`.

## 1. `crash_example.c`

Firstly pasting the raw output from valgrind;

==659== Memcheck, a memory error detector
==659== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==659== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==659== Command: ./crash_example
==659== 
crash_example: deterministic NULL dereference (segmentation fault)
  requesting n=0
==659== Invalid write of size 4
==659==    at 0x10928A: main (crash_example.c:32)
==659==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==659== 
==659== 
==659== Process terminating with default action of signal 11 (SIGSEGV): dumping core
==659==  Access not within mapped region at address 0x0
==659==    at 0x10928A: main (crash_example.c:32)
==659==  If you believe this happened as a result of a stack
==659==  overflow in your program's main thread (unlikely but
==659==  possible), you can try to increase the size of the
==659==  main thread stack using the --main-stacksize= flag.
==659==  The main thread stack size used in this run was 8388608.
==659== 
==659== HEAP SUMMARY:
==659==     in use at exit: 1,024 bytes in 1 blocks
==659==   total heap usage: 1 allocs, 0 frees, 1,024 bytes allocated
==659== 
==659== 1,024 bytes in 1 blocks are still reachable in loss record 1 of 1
==659==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==659==    by 0x48DEB63: _IO_file_doallocate (filedoalloc.c:101)
==659==    by 0x48EDC9F: _IO_doallocbuf (genops.c:347)
==659==    by 0x48ECF1F: _IO_file_overflow@@GLIBC_2.2.5 (fileops.c:744)
==659==    by 0x48EB694: _IO_new_file_xsputn (fileops.c:1243)
==659==    by 0x48EB694: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1196)
==659==    by 0x48E0EDB: puts (ioputs.c:40)
==659==    by 0x10925E: main (crash_example.c:27)
==659== 
==659== LEAK SUMMARY:
==659==    definitely lost: 0 bytes in 0 blocks
==659==    indirectly lost: 0 bytes in 0 blocks
==659==      possibly lost: 0 bytes in 0 blocks
==659==    still reachable: 1,024 bytes in 1 blocks
==659==         suppressed: 0 bytes in 0 blocks
==659== 
==659== For lists of detected and suppressed errors, rerun with: -s
==659== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
Segmentation fault
.
### Error Interpretation

The first error listed here is "invalid write size of 4"
This occurs in the main function when nums[0] is set to 42.

This is because the n of zero leads to a null return from the allocate numbers function, 
the memory is never malloc'd

The line after the error lists the line 32 of the source file as the offending command, 
although the error is caused earlier in the program - arguably when int n = 0; on line 25.

The Still reachable 1024 bytes appears to be a result of the termination of the process due to the seg fault
This was memory used for displaying the 'crash example' text at the program start, that was not freed

## 2. `heap_example.c`

Again pasting the raw valgrind output;

==660== Memcheck, a memory error detector
==660== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==660== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==660== Command: ./heap_example
==660== 
heap_example: allocations and a deliberate leak
  alice=0x4a8c480 name=0x4a8c4d0 age=30
  bob=0x4a8c520 name=0x4a8c570 age=41
==660== 
==660== HEAP SUMMARY:
==660==     in use at exit: 6 bytes in 1 blocks
==660==   total heap usage: 5 allocs, 4 frees, 1,066 bytes allocated
==660== 
==660== 6 bytes in 1 blocks are definitely lost in loss record 1 of 1
==660==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==660==    by 0x109211: person_new (heap_example.c:21)
==660==    by 0x1092FA: main (heap_example.c:51)
==660== 
==660== LEAK SUMMARY:
==660==    definitely lost: 6 bytes in 1 blocks
==660==    indirectly lost: 0 bytes in 0 blocks
==660==      possibly lost: 0 bytes in 0 blocks
==660==    still reachable: 0 bytes in 0 blocks
==660==         suppressed: 0 bytes in 0 blocks
==660== 
==660== For lists of detected and suppressed errors, rerun with: -s
==660== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

### Error Interpretation

This program exits on its own terms, however it does exit without correctly freeing all the memory that it allocated.

The error lines point to;
person_new using malloc to allocate memory for a new person, ( line 21)
and this being called by main at line 51 - when alice is created,

These lines help to identify the issue, which is actually further down in the main,

we can see that bob->name is freed, and then bob is freed.
Where as Alice is sent to the 'person_free_partial' function, 
which only frees the person struct, without freeing the name string before hand

There is then no way to free the name string, as we no longer have a pointer to its location.

The Heap Summary lists 5 allocs, and 4 frees.
I believe this is due to an automatic allocation & free as part of the programs operation,
which leaves 4 allocations, ( 2 for each person)
and 3 frees ( 2 for bob, and 1 for alice)

## 3. `stack_example.c`

Firstly the raw valgrind output;

==661== Memcheck, a memory error detector
==661== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==661== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==661== Command: ./stack_example
==661== 
stack_example: recursion and stack frames
[enter] depth=0
  &local_int=0x1fff000214  p_local=0x1fff000214  local_int=100
  local_buf=0x1fff000220  local_buf[0]=A
  &marker=0x1fff000264  marker=0
[enter] depth=1
  &local_int=0x1fff0001e4  p_local=0x1fff0001e4  local_int=101
  local_buf=0x1fff0001f0  local_buf[0]=B
  &marker=0x1fff000234  marker=10
[enter] depth=2
  &local_int=0x1fff0001b4  p_local=0x1fff0001b4  local_int=102
  local_buf=0x1fff0001c0  local_buf[0]=C
  &marker=0x1fff000204  marker=20
[enter] depth=3
  &local_int=0x1fff000184  p_local=0x1fff000184  local_int=103
  local_buf=0x1fff000190  local_buf[0]=D
  &marker=0x1fff0001d4  marker=30
[exit] depth=3
  &local_int=0x1fff000184  p_local=0x1fff000184  local_int=103
  local_buf=0x1fff000190  local_buf[0]=D
  &marker=0x1fff0001d4  marker=30
[exit] depth=2
  &local_int=0x1fff0001b4  p_local=0x1fff0001b4  local_int=102
  local_buf=0x1fff0001c0  local_buf[0]=C
  &marker=0x1fff000204  marker=20
[exit] depth=1
  &local_int=0x1fff0001e4  p_local=0x1fff0001e4  local_int=101
  local_buf=0x1fff0001f0  local_buf[0]=B
  &marker=0x1fff000234  marker=10
[exit] depth=0
  &local_int=0x1fff000214  p_local=0x1fff000214  local_int=100
  local_buf=0x1fff000220  local_buf[0]=A
  &marker=0x1fff000264  marker=0
==661== 
==661== HEAP SUMMARY:
==661==     in use at exit: 0 bytes in 0 blocks
==661==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==661== 
==661== All heap blocks were freed -- no leaks are possible
==661== 
==661== For lists of detected and suppressed errors, rerun with: -s
==661== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

### Error Interpretation

There are no errors resported in this example by valgrind

The interesting aspect of this example is sequetial memory addresses of the local_int variables
the function of the main program causes these memory addresses to be printed in sequence 

0x1fff000214
0x1fff0001e4
0x1fff0001b4
0x1fff000184

these values appear to be decreasing, which indicates that each subsequent stack frame is being assigned 'below' the previous one

They then repeat in reverse order, as each frame is discarded in sequence

## 4. `aliasing_example.c`

last output pasted below;

==658== Memcheck, a memory error detector
==658== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==658== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==658== Command: ./aliasing_example
==658==
aliasing_example: aliasing and use-after-free (Valgrind should report it)
  a=0x4a8c480 b=0x4a8c480 a[2]=22 b[2]=22
  after free(a): b=0x4a8c480 (dangling)
==658== Invalid read of size 4
==658==    at 0x1092F5: main (aliasing_example.c:42)
==658==  Address 0x4a8c488 is 8 bytes inside a block of size 20 free'd
==658==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==658==    by 0x1092D1: main (aliasing_example.c:38)
==658==  Block was alloc'd at
==658==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==658==    by 0x1091E4: make_numbers (aliasing_example.c:12)
==658==    by 0x109272: main (aliasing_example.c:30)
==658==
  reading b[2]=22
==658== Invalid write of size 4
==658==    at 0x109315: main (aliasing_example.c:44)
==658==  Address 0x4a8c48c is 12 bytes inside a block of size 20 free'd
==658==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==658==    by 0x1092D1: main (aliasing_example.c:38)
==658==  Block was alloc'd at
==658==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==658==    by 0x1091E4: make_numbers (aliasing_example.c:12)
==658==    by 0x109272: main (aliasing_example.c:30)
==658==
==658== Invalid read of size 4
==658==    at 0x109323: main (aliasing_example.c:45)
==658==  Address 0x4a8c48c is 12 bytes inside a block of size 20 free'd
==658==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==658==    by 0x1092D1: main (aliasing_example.c:38)
==658==  Block was alloc'd at
==658==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==658==    by 0x1091E4: make_numbers (aliasing_example.c:12)
==658==    by 0x109272: main (aliasing_example.c:30)
==658==
  wrote b[3]=1234
==658==
==658== HEAP SUMMARY:
==658==     in use at exit: 0 bytes in 0 blocks
==658==   total heap usage: 2 allocs, 2 frees, 1,044 bytes allocated
==658==
==658== All heap blocks were freed -- no leaks are possible
==658==
==658== For lists of detected and suppressed errors, rerun with: -s
==658== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

### Error Interpretation

The first error here is an Invalid read size of 4.

This is due to the dangling pointer 'b' whioch is called at line 42
   printf("  reading b[2]=%d\n", b[2]);

the error goes on to explain that b was pointing to memory that was previously freed on line 38
    free(a);

and that the memory was allocated back at line 30
    a = make_numbers(n);

    which is a call to the make_numbers function, using malloc.

Continuing to the next error, we have an invalid write size of 4 at line 44
    b[3] = 1234;

This is due to an attempt to assign an integer value ( 4 bytes ) to b, which as previously explained, 
is no longer accessible
The next lines explain the same issue, referring to lines 38 & 30 again

There is again another error listed at line 45
    printf("  wrote b[3]=%d\n", b[3]);

yet again b is referenced after being previously freed, classic use-after-free issue caused by the aliasing of pointers a and b


