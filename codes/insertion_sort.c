//Code from : https://github.com/TheAlgorithms/C/tree/master/sorting by Du Yuanchao
 
void insertionSort(int *arr, int size)
{
	int i;
    for (i = 1; i < size; i++)
    {
        int j = i - 1;
        int key = arr[i];
        /* Move all elements greater than key to one position */
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        /* Find a correct position for key */
        arr[j + 1] = key;
    }
}
