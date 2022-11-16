// Coding Ninjas has provided you a 9*9 sudoku board. The board contains non zero and zero values. 
// Non zero values lie in the range: [1, 9]. Cells with zero value indicate that the particular cell is empty and can be replaced by non zero values.
  
// You need to find out whether the sudoku board can be solved. If the sudoku board can be solved, then print true, otherwise print false.
  
// Sample Input 1:
// 9 0 0 0 2 0 7 5 0 
// 6 0 0 0 5 0 0 4 0 
// 0 2 0 4 0 0 0 1 0 
// 2 0 8 0 0 0 0 0 0 
// 0 7 0 5 0 9 0 6 0 
// 0 0 0 0 0 0 4 0 1 
// 0 1 0 0 0 5 0 8 0 
// 0 9 0 0 7 0 0 0 4 
// 0 8 2 0 4 0 0 0 6

// Sample Output 1:
// true

#include <bits/stdc++.h>
using namespace std;
int n = 9;
bool find_empty_location(int **arr, int &row, int &col)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}
bool vertical(int **arr, int row, int col, int value)
{
    for (int i = 0; i < n; i++)
        if (arr[i][col] == value)
            return false;
    return true;
}
bool horizontal(int **arr, int row, int col, int value)
{
    for (int i = 0; i < n; i++)
        if (arr[row][i] == value)
            return false;
    return true;
}
bool box(int **arr, int row, int col, int value)
{
    int row_factor = row - (row % 3);
    int col_factor = col - (col % 3);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (arr[i + row_factor][j + col_factor] == value)
                return false;
    return true;
}
bool checker(int **arr, int value, int row, int col)
{
    if (vertical(arr, row, col, value) && horizontal(arr, row, col, value) && box(arr, row, col, value))
        return true;
    return false;
}
bool solveSudoku(int **arr)
{
    int row = 0, col = 0;
    if (!find_empty_location(arr, row, col))
        return true;
    for (int i = 1; i <= n; i++)
    {
        if (checker(arr, i, row, col))
        {
            arr[row][col] = i;
            if (solveSudoku(arr))
                return true;
            else
                arr[row][col] = 0;
        }
    }
    return false;
}
void sudokuSolver(int board[][9])
{
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            arr[i][j] = board[i][j];
    }
    if (solveSudoku(arr))
        cout << "true";
    else
        cout << "false";
}

int main(){
   
    int board[9][9];
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> board[i][j];
    sudokuSolver(board);
    return 0;
}
