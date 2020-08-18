void GenerateData(int *A, int N)
{
	int i;
	
	srand(time(NULL));
	for (i = 0; i < N; i++)
    {
        A[i] = rand() % 1000;
    }
}


