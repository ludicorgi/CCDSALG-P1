//Code from : https://github.com/TheAlgorithms/C/tree/master/sorting by Du Yuanchao
 
int insertionSort(int *arr, int size)
{
	int i;
	int ctr = 0;
    for (i = 1; i < size; i++)
    {
        int j = i - 1;
        int key = arr[i];
	ctr++;
        /* Move all elements greater than key to one position */
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
	    ctr++;
        }
        /* Find a correct position for key */
        arr[j + 1] = key;
    }
	return ctr;
}
