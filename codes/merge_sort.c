/* C program for Merge Sort */
//from https://www.geeksforgeeks.org/merge-sort/

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
int merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m;
	long int ctr = 0;

	/* create temp arrays */
	int L[n1], R[n2]; 

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++) 
	{
		L[i] = arr[l + i];
		ctr++;
	}
	
	for (j = 0; j < n2; j++) 
	{
		R[j] = arr[m + 1 + j];
		ctr++;
	}

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; /* Initial index of first subarray*/		ctr++;
	j = 0; /* Initial index of second subarray */	ctr++;
	k = l; /* Initial index of merged subarray */	ctr++;
	while (i < n1 && j < n2) { 
		if (L[i] <= R[j]) { 
			arr[k] = L[i]; 
			i++;
			ctr++;
		} 
		else { 
			arr[k] = R[j]; 
			j++; 
			ctr++;
		} 
		k++; 
	} 

	/* Copy the remaining elements of L[], if there 
	are any */
	while (i < n1) { 
		arr[k] = L[i]; 
		i++; 
		k++; 
		ctr++;
	} 

	/* Copy the remaining elements of R[], if there 
	are any */
	while (j < n2) { 
		arr[k] = R[j]; 
		j++; 
		k++; 
		ctr++;
	} 
	return ctr;
} 

/* l is for left index and r is right index of the 
sub-array of arr to be sorted */
int mergeSort(int arr[], int l, int r) 
{ 
	long int ctr = 0;
	if (l < r) { 
		// Same as (l+r)/2, but avoids overflow for 
		// large l and h 
		int m = l + (r - l) / 2; ctr++;

		// Sort first and second halves 
		ctr += mergeSort(arr, l, m); 
		ctr += mergeSort(arr, m + 1, r); 

		ctr += merge(arr, l, m, r);
	} 
	return ctr;
} 


