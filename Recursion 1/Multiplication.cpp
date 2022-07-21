/*
Input format :
Line 1 : Integer M
Line 2 : Integer N

Output format :
M x N

Sample Input 1 :
3 
5
  
Sample Output 1 :
15
*/

int multiplyNumbers(int m, int n)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }

    else
    {
        int i = multiplyNumbers(m, n - 1);
        return m + i;
    }
}

/*
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
*/
