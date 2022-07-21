/*
Sample Input :
00010204
  
Sample Output :
2
*/

// Example 10320 and 10329- 
// 1032 & 1032 when divided and 0 & 9 when %
// first part is of recursion, our job is to see the second part
// when it's 0, we do 1 firt part & when it's not, we return first part

int countZeros(int n)
{
    if (n / 10 == 0)                          
    {
        if (n % 10 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
    int x = countZeros(n / 10);             // second part
    int r = n % 10;                         // first part
    if (r == 0)
    {
        return x + 1;                       
    }
    else
    {
        return x;
    }
}

/*
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
*/
