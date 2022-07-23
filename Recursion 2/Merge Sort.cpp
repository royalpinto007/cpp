/*
Sample Input 1 :
6 
2 6 8 5 4 3

Sample Output 1 :
2 3 4 5 6 8
*/  

void merge(int a[], int l, int mid, int u)
{

    int size1 = mid - l + 1;
    int size2 = u - mid;

    int L1[size1];
    int L2[size2];

    int k = 0;
    for (int i = l; i <= mid; i++, k++)
        L1[k] = a[i];
    int j = 0;
    for (int i = mid + 1; i <= u; i++, j++)
        L2[j] = a[i];
    k = 0;
    j = 0;
    int i = l;
    while (k < size1 && j < size2)
    {

        if (L1[k] <= L2[j])
        {
            a[i] = L1[k++];
            i++;
        }
        else
        {
            a[i] = L2[j++];
            i++;
        }
    }

    while (k < size1)
    {
        a[i] = L1[k++];
        i++;
    }
    while (j < size2)
    {
        a[i] = L2[j++];
        i++;
    }
}
void mS(int a[], int l, int u)
{

    if (l < u)
    {
        int mid = (l + u) / 2;
        mS(a, l, mid);
        mS(a, mid + 1, u);
        merge(a, l, mid, u); // another function to merge two sorted arrays
    }
}

void mergeSort(int input[], int size)
{
    // Write your code here
    int l = 0;
    int u = size - 1;

    mS(input, l, u); // we call another function because we need to use divide and merge
}

/*
Time Complexity : O(n * log(n)) 
Space Complexity : O(n) 
where n is size of input array 

void merge(int input1[], int size1, int input2[], int size2, int output[]) 
{
    int i = 0, j = 0, k = 0; 
    
    while (i < size1 && j < size2) 
    { 
        if (input1[i] < input2[j])
        { 
            output[k] = input1[i]; 
            k++; 
            i++; 
        } 
        
        else 
        { 
        	output[k] = input2[j]; 
        	j++; 
        	k++; 
         } 
    } 
    
    while (i < size1)
    { 
        output[k] = input1[i]; 
        k++; 
        i++; 
    }
    
    while (j < size2) 
    { 
    	output[k] = input2[j]; 
    	j++; 
    	k++; 
    } 
} 
void mergeSort(int input[], int size) 
{ 
    if (size <= 1) 
    { 
        return; 
    } 
    
    int mid = size / 2; 
    int part1[500], part2[500]; 
    int size1 = mid, size2 = size - mid; 
    for (int i = 0; i < mid; i++) 
    { 
        part1[i] = input[i]; 
    } 
    int k = 0; for (int i = mid; i < size; i++) 
    { 
        part2[k] = input[i]; k++; 
    } 
    
    mergeSort(part1, size1); 
    mergeSort(part2, size2); 
	merge(part1, size1, part2, size2, input); 
}
*/ 
