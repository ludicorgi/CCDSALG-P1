//Code from https://github.com/TheAlgorithms/C/tree/master/sorting by Du Yuanchao

/**
 * Selection sort algorithm implements
 * @param arr array to be sorted
 * @param size size of array
 */
int selectionSort(int *arr, int size)
{
	int i, j;
	long int ctr = 0;
    for (i = 0; i < size - 1; i++)
    {
        int min_index = i;
	ctr++;
        for (j = i + 1; j < size; j++)
        {
		ctr++;
            if (arr[min_index] > arr[j])
            {
		ctr++;
                min_index = j;
            }
        }
        if (min_index != i)
        {
	    ctr++;
            swap(arr + i, arr + min_index);
        }
    }
	return ctr;
}
