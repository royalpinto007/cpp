// int gcd(int a, int b) 
// {
//     if(b == 0)
//     {
//         return a;
//     }
//     gcd(b, a % b);
// }

// void rotate(int *input, int d, int n) 
// {
//     //using juggling sort we can solve this question
//     int idx = gcd(n, d);
    
//     for(int i = 0; i < idx; i++) 
//     {
//         int temp = input[i];
//         int j = i;
        
//         for(;true;) 
//         {
//            int k = j + d;
//            if(k >= n) 
//            {
//                k -= n;
//            }
//            if(k == i)
//             	break;
           
//             input[j] = input[k];
//             j = k;
//         }
//         input[j] = temp;
//     }
// }

void swapElements(int *input, int i, int j) 
{ 
  int temp = input[i]; 
  input[i] = input[j]; 
  input[j] = temp; 
} 

void reverse(int *input, int start, int end) 
{ 
  int i = start, j = end; 
  while (i < j) 
  { 
    swapElements(input, i, j); 
    i++; j--; 
  } 
} 

void rotate(int *input, int d, int n) 
{ 
  if (d >= n && n != 0) 
  { 
    d = d % n; 
  } 
  else if (n == 0) 
  { 
    return; 
  } 
  
  reverse(input, 0, n - 1); 
  reverse(input, 0, n - d - 1);
  reverse(input, n - d, n - 1); 
}

/*
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}
	return 0;
}
*/
