// Fahrenheit to Celsius Table
/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W),
you need to convert all Fahrenheit values from Start to End at the gap of W,
into their corresponding Celsius values and print the table.

*/
#include <iostream>
using namespace std;

void printTable(int start, int end, int step)
{

    int c;
    int i = 1;
    for (int i = start; i <= end; i = i + step)
    {
        c = (i - 32) * 5.0 / 9;
        cout << i <<" " << c << endl;
    }
}


int main()
{
    int start, end, step;
    cin >> start >> end >> step;

    printTable(start, end, step);
}
