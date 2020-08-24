#define CPU_TIME  (1)
#define Nsize 16384

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

int main(){
	double sum = 0;
    double add = 1;
    int i,j;
    long counter;
    
    int arr[Nsize], duplicate[Nsize];
    srand(time(NULL));
    
    // Start measuring time
    struct timespec begin, end; 
	
for(j = 0; j < 10; j++)
{   
	
	GenerateData(arr, Nsize);
    copy(arr,duplicate,Nsize);
    printf("----------------------------------------\n");
    
    
#if CPU_TIME                 //BUBBLE

    // get start CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin);

#else

    clock_gettime(CLOCK_REALTIME, &begin);

#endif    
    //SORT HERE
	counter = bubbleSort(arr, Nsize);
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
    
    //printf("Result: %.20f\n", sum);
    printf("bubbleSort Result : %d\n", counter);
    
    printf("CPU Time measured: %lf in seconds.\n", elapsed);
    printf("CPU Time measured: %lf in milliseconds.\n", elapsed * 1000); // multiply seconds by 1000 to get milliseconds
    
    copy(duplicate,arr,Nsize); //un-sort array
    counter = 0;
    
    
    
    
#if CPU_TIME                 //INSERTION

    // get start CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin);

#else
    clock_gettime(CLOCK_REALTIME, &begin);

#endif    
    //SORT HERE
	counter = insertionSort(arr, Nsize);
    // Stop measuring time and calculate the elapsed time
#if CPU_TIME 

    // get end CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);   

#else
   clock_gettime(CLOCK_REALTIME, &end);

#endif

    seconds = end.tv_sec - begin.tv_sec;
    nanoseconds = end.tv_nsec - begin.tv_nsec;
    elapsed = seconds + nanoseconds*1e-9;
    
    //printf("Result: %.20f\n", sum);
    printf("\ninsertionSort Result : %d\n", counter);
    
    printf("CPU Time measured: %lf in seconds.\n", elapsed);
    printf("CPU Time measured: %lf in milliseconds.\n", elapsed * 1000); // multiply seconds by 1000 to get milliseconds
    
    copy(duplicate,arr,Nsize); //un-sort array
    counter = 0;



#if CPU_TIME                 //SELECTION

    // get start CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin);

#else
    clock_gettime(CLOCK_REALTIME, &begin);

#endif    
    //SORT HERE
	counter = selectionSort(arr, Nsize);
    // Stop measuring time and calculate the elapsed time
#if CPU_TIME 

    // get end CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);   

#else
   clock_gettime(CLOCK_REALTIME, &end);

#endif

    seconds = end.tv_sec - begin.tv_sec;
    nanoseconds = end.tv_nsec - begin.tv_nsec;
    elapsed = seconds + nanoseconds*1e-9;
    
    //printf("Result: %.20f\n", sum);
    printf("\nSelectionSort Result : %d\n", counter);

    printf("CPU Time measured: %lf in seconds.\n", elapsed);
    printf("CPU Time measured: %lf in milliseconds.\n", elapsed * 1000); // multiply seconds by 1000 to get milliseconds
    
    copy(duplicate,arr,Nsize); //un-sort array
    counter = 0;
    
    
#if CPU_TIME                 //MERGE

    // get start CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin);

#else
    clock_gettime(CLOCK_REALTIME, &begin);

#endif    
    //SORT HERE
	counter = mergeSort(arr, 0, Nsize-1);
    // Stop measuring time and calculate the elapsed time
#if CPU_TIME 

    // get end CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);   

#else
   clock_gettime(CLOCK_REALTIME, &end);

#endif

    seconds = end.tv_sec - begin.tv_sec;
    nanoseconds = end.tv_nsec - begin.tv_nsec;
    elapsed = seconds + nanoseconds*1e-9;
    
    //printf("Result: %.20f\n", sum);
    printf("\nmergeSort Result : %d\n", counter);

    printf("CPU Time measured: %lf in seconds.\n", elapsed);
    printf("CPU Time measured: %lf in milliseconds.\n", elapsed * 1000); // multiply seconds by 1000 to get milliseconds
    
    copy(duplicate,arr,Nsize); //un-sort array
    counter = 0;
    
    
    
#if CPU_TIME                 //SHELL

    // get start CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin);

#else
    clock_gettime(CLOCK_REALTIME, &begin);

#endif    
    //SORT HERE
	counter = shellSort(arr, Nsize);
    // Stop measuring time and calculate the elapsed time
#if CPU_TIME 

    // get end CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);   

#else
   clock_gettime(CLOCK_REALTIME, &end);

#endif

    seconds = end.tv_sec - begin.tv_sec;
    nanoseconds = end.tv_nsec - begin.tv_nsec;
    elapsed = seconds + nanoseconds*1e-9;
    
    //printf("Result: %.20f\n", sum);
    printf("\nshellSort Result : %d\n", counter);

    printf("CPU Time measured: %lf in seconds.\n", elapsed);
    printf("CPU Time measured: %lf in milliseconds.\n", elapsed * 1000); // multiply seconds by 1000 to get milliseconds
    
    copy(duplicate,arr,Nsize); //un-sort array
    counter = 0;
  
  
#if CPU_TIME                 //QUICK

    // get start CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin);

#else
    clock_gettime(CLOCK_REALTIME, &begin);

#endif    
    //SORT HERE
	counter = quickSort(arr, 0, Nsize-1);
    // Stop measuring time and calculate the elapsed time
#if CPU_TIME 

    // get end CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);   

#else
   clock_gettime(CLOCK_REALTIME, &end);

#endif

    seconds = end.tv_sec - begin.tv_sec;
    nanoseconds = end.tv_nsec - begin.tv_nsec;
    elapsed = seconds + nanoseconds*1e-9;
    
    //printf("Result: %.20f\n", sum);
    printf("\nquickSort Result : %d\n", counter);

    printf("CPU Time measured: %lf in seconds.\n", elapsed);
    printf("CPU Time measured: %lf in milliseconds.\n", elapsed * 1000); // multiply seconds by 1000 to get milliseconds
    
    copy(duplicate,arr,Nsize); //un-sort array
    counter = 0;  

}
	
	return 0;
}
