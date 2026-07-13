# Green Efficiency Analysis

## Measurement Methodology

Various functions were timed to compare relative and variable lengths
Internal system time was measured using the commands clock_t and clock.
The internal clock values were then translated to human readable second values using the command CLOCKS_PER_SEC.
This was done by taking the 'end' time, subtracting the 'start' time, and then dividing by the clocks per second value

## Observed Performance Differences

Running each command three times showed small variances in each total time on the order of 1%
This inciates that different starting states, and memory locations of code and variables can affect the *speed* at which tasks are completed.
It also indicates that it will be difficult to build a program thast depends on time or consistent time of execution.

## Relation Between Runtime and Energy Consumption

The complexity of a program is proportional to the energy used to process it. Small changes in program code can have vastly different results in execution.
the example of a single for loop cycling through an array versus a two dimensional cycle being n times as long, where n = the size of the array indicates that only one operation is completed on each clock cycle. A system that is capable of parallel processing may be able to accomplish the same task in less measured cycles, but this would not translate to more being efficient, other than utilising more completely the resources that are available. It could in fact be less efficint as there are overhads asscociated with parallel processing.


## Limitations of the Experiment

The results from this test cannot stand in for any other platform without testing on those platforms
only in a general sense it possible to say that more complex code will take more clock cycles to complete.
in a typical program there might be hundreds of functions, and so a small inefficiency in one function may not be a large cause for concern.

## Practical Engineering Takaway

Special care must be taken to prioritise efficiency of code, testing and benchmarking an early prototype of a program may reveal design flaws at an early enough state that changes are simple.
where as discovering late in development that a particular function that is used extensively by the program as a whole is very slow could lead to much more extensive re-work. If the function has to be altered or split into sub sunctions, it easy to imagine this becoming a difficult problem to solve.
