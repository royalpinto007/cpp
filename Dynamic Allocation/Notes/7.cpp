//Dynamic Allocation of 2D Arrays
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int **p = new int *[m];                 // Syntax of 2D Arrays
  
    // to input
    for (int i = 0; i < m; i++)
    {
        p[i] = new int[i + 1];
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }
    
    // deleting the array
    for (int i = 0; i < m; i++)
    {
        delete[] p[i];
    }
    delete[] p;
}
