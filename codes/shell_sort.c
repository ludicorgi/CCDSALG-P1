//Code from https://github.com/TheAlgorithms/C/tree/master/sorting by Du Yuanchao

int shellSort(int array[], int len)
{
    int i, j, gap;
    int ctr = 0;
    
    for (gap = len / 2; gap > 0; gap = gap / 2)
    {
        ctr++;
        for (i = gap; i < len; i++)
        {
            ctr++;
            for (j = i - gap; j >= 0 && array[j] > array[j + gap]; j = j - gap)
            {   
                ctr++;
                swap(&array[j], &array[j + gap]);
            }
        }
    }
    return ctr;
}

