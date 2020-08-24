//Code from https://github.com/TheAlgorithms/C/tree/master/sorting by Du Yuanchao

/*Partition method which selects a pivot
  and places each element which is less than the pivot value to its left
  and the elements greater than the pivot value to its right
  arr[] --- array to be partitioned
  lower --- lower index
  upper --- upper index
*/

int partition(int arr[], int lower, int upper, long int *ctr)
{
    int i = (lower - 1); *ctr++;

    int pivot = arr[upper];  *ctr++; // Selects last element as the pivot value

    int j;
    for (j = lower; j < upper; j++)
    {
        
        if (arr[j] <= pivot)
        {  // if current element is smaller than the pivot

            i++;  // increment the index of smaller element
            swap(&arr[i], &arr[j]); *ctr++;
        }
        *ctr++;
    }

    swap(&arr[i + 1], &arr[upper]);  // places the last element i.e, the pivot
     *ctr++;                          // to its correct position

    return (i + 1);
}

/*This is where the sorting of the array takes place
    arr[] --- Array to be sorted
    lower --- Starting index
    upper --- Ending index
*/
long int quickSort(int arr[], int lower, int upper)
{
	long int ctr = 0;
    if (upper > lower)
    {
        // partitioning index is returned by the partition method , partition
        // element is at its correct poition
        int partitionIndex = partition(arr, lower, upper, &ctr);
 
        // Sorting elements before and after the partition index
        ctr += quickSort(arr, lower, partitionIndex - 1);
        ctr += quickSort(arr, partitionIndex + 1, upper);
        ctr++;
    }
    
    return ctr;
}
