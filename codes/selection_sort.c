//Code from https://github.com/TheAlgorithms/C/tree/master/sorting by Du Yuanchao

/**
 * Selection sort algorithm implements
 * @param arr array to be sorted
 * @param size size of array
 */
void selectionSort(int *arr, int size)
{
	int i, j;
    for (i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(arr + i, arr + min_index);
        }
    }
}
