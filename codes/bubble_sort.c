//Code from https://github.com/TheAlgorithms/C/tree/master/sorting by Du Yuanchao

/**
 * Bubble sort algorithm implementation
 * @param arr array to be sorted
 * @param size size of array
 */
int bubbleSort(int *arr, int size)
{
	int i,j;
	long int ctr = 0;
    for (i = 0; i < size - 1; i++)
    {                         /* for each array index */
        bool swapped = false; /* flag to check if any changes had to be made */
        /* perform iterations until no more changes were made or outer loop
            executed for all array indices */
	    ctr++;
        for (j = 0; j < size - 1 - i; j++)
        { /* for each element in the array */
		ctr++;
            if (arr[j] > arr[j + 1])
            { /* if the order of successive elements needs update */
                swap(&arr[j], &arr[j + 1]);
                swapped = true; /* set flag */
		ctr++;
            }
        }
        if (!swapped)
        {
		ctr++;
            /* since no more updates we made, the array is already sorted
                this is an optimization for early termination */
            break;
        }
    }
	return ctr;
}
