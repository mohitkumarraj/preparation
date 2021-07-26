#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][6] = {{1, 5, 7, 9, 10, 11},
                     {6, 10, 12, 13, 20, 21},
                     {9, 25, 29, 30, 32, 40},
                     {15, 55, 59, 63, 68, 70},
                     {40, 70, 79, 81, 95, 105}};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }


cout<<"Spiral print is here = \n";
    int row_st = 0, col_st = 0, row_end = 4, col_end = 5;

    while (row_st <= row_end && col_st <= col_end)
    {

        for (int i = col_st; i <= col_end; i++)
        {
            cout << arr[row_st][i] << " ";
        }
        row_st++;

        for (int i = row_st; i <= row_end; i++)
        {
            cout << arr[i][col_end] << " ";
        }
        col_end--;

        for (int i = col_end; i >=col_st; i--)
        {
            cout << arr[row_end][i] << " ";
        }

        row_end--;

        for (int i = row_end; i >= row_st; i--)
            cout << arr[i][col_st] << " ";
        col_st++;

        cout << "\n";
    }

    return 0;
}