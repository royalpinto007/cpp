/*
Sample Input :
00010204
  
Sample Output :
2
*/

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
    int x = countZeros(n / 10);
    int r = n % 10;
    if (r == 0)
    {
        return x + 1;
    }
    else
    {
        return x;
    }
}

/* My Answer- Alternative
int countZeros(int n) 
{
    if(n/10 == 0)
    {
        if(n%10 == 0)
        {
            return 1 ;
        }
        else
        {
            return 0 ;
        }
    }
    int x = countZeros(n/10);
    int r = n % 10;
    if(r == 0)
    {
        return x + 1;
    }
    else
    {
        return x;
    }
}
*/

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
