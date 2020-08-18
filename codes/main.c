#define CPU_TIME  (1)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#include "utility.c"
#include "bubble_sort.c"
#include "insertion_sort.c"
#include "selection_sort.c"
#include "merge_sort.c"
#include "shell_sort.c"
#include "quick_sort.c"
#include "GenerateData.c"

int main () {
    double sum = 0;
    double add = 1;
    int i;

    // Start measuring time
    struct timespec begin, end; 

#if CPU_TIME

    // get start CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin);

#else

    clock_gettime(CLOCK_REALTIME, &begin);

#endif    

    /* NOTE: the next 5 lines are the computations being timed.  These lines should be replaced a line that calls a sorting function. */
    /*ADD ALGO HERE







    */
    
    // Stop measuring time and calculate the elapsed time
#if CPU_TIME 

    // get end CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);   

#else

   clock_gettime(CLOCK_REALTIME, &end);

#endif

    long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double elapsed = seconds + nanoseconds*1e-9;
    
    printf("Result: %.20f\n", sum);
    
    printf("CPU Time measured: %lf in seconds.\n", elapsed);
    printf("CPU Time measured: %lf in milliseconds.\n", elapsed * 1000); // multiply seconds by 1000 to get milliseconds
    
    return 0;
}
