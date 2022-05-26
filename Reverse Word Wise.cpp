#include <iostream>
using namespace std;
/*
void reverse(char input[], int start, int end) {
    while(start < end) { s
    td::swap(input[start++], input[end--]);
    } }

    void reverseStringWordWise(char input[]) {
        int previousSpaceIndex = -1; int i = 0;
        for(; input[i] != '\0'; i++) {
            if(input[i] == ' ') {
                reverse(input, previousSpaceIndex + 1, i - 1);
                previousSpaceIndex = i;
                } }
                reverse(input, previousSpaceIndex + 1, i - 1);
                reverse(input, 0, i - 1);
                }

*/
void reverseStringWordWise(char input[])
{

    int len = 0;
    int i = 0;
    while (input[i] != '\0')
    {
        len++;
        i++;
    }

    int start = 0, end = len - 1;
    while (start < end)
    {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }

    int st = 0;

    for (int i = 0; i <= len; i++)
    {
        if (input[i] == ' ' || input[i] == '\0')
        {
            int end = i - 1;
            while (st < end)
            {
                char temp = input[st];
                input[st] = input[end];
                input[end] = temp;
                st++;
                end--;
            }

            st = i + 1;
        }
    }
}

int main()
{
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
