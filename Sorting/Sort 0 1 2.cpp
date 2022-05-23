#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            k++;
        }
    }

    // cout<<k<<endl;

    for (int j = k; j < n; j++)
    {
        if (arr[j] == 1)
        {
            int temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
            k++;
        }
    }
    // cout<<k<<endl;
    for (int p = k; p < n; p++)
    {
        if (arr[p] == 2)
        {
            arr[k] = 2;
            k++;
            // cout<<"khj"<<endl;
        }
    }
    // cout<<k<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;

        cin >> size;
        int *arr = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        sort012(arr, size);

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        delete[] arr;
        cout << endl;
    }

    return 0;
}
