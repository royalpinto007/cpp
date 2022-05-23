#include <iostream>
using namespace std;

void sumOfTwoArrays(int *i1, int s1, int *i2, int s2, int *output)
{
    int i = s1 - 1;
    int j = s2 - 1;
    int carry = 0;
    int k = max(s1, s2);

    while (i >= 0 && j >= 0)
    {
        int sum = i1[i] + i2[j] + carry;
        output[k] = sum % 10;
        carry = sum / 10;
        i--;
        j--;
        k--;
    }

    while (i >= 0)
    {
        int sum = i1[i] + carry;
        output[k] = sum % 10;
        carry = sum / 10;
        i--;
        k--;
    }
    while (j >= 0)

    {
        int sum = i2[j] + carry;
        output[k] = sum % 10;
        carry = sum / 10;
        j--;
        k--;
    }
    output[0] = carry; // Write your code here
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size1;
        cin >> size1;

        int *input1 = new int[size1];

        for (int i = 0; i < size1; ++i)
        {
            cin >> input1[i];
        }

        int size2;
        cin >> size2;

        int *input2 = new int[size2];

        for (int i = 0; i < size2; ++i)
        {
            cin >> input2[i];
        }

        int outsize = 1 + max(size1, size2);

        int *output = new int[outsize];

        sumOfTwoArrays(input1, size1, input2, size2, output);

        for (int i = 0; i < outsize; ++i)
        {
            cout << output[i] << " ";
        }

        delete[] input1;
        delete[] input2;
        delete[] output;
        cout << endl;
    }

    return 0;
}
