void display(const int *arr, int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void copy(int *src, int *dest, int size)
{
	int i;
	for(i = 0; i < size; i++) {
      dest[i] = src[i];
   }
}
