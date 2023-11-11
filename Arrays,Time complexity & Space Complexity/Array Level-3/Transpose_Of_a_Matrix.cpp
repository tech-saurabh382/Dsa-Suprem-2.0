#include <iostream>
using namespace std;

void transpose(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void printArray(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 70, 8},
        {9, 10, 1, 11},
        {22, 38, 28, 13}};

    int row = 4;
    int col = 4;
    cout << endl
         << "Printing Before Transpose: " << endl;
    printArray(arr, row, col);

    cout << endl
         << "Doing Transpose" << endl;
    transpose(arr, row, col);

    cout << endl
         << "Printing After Transpose: " << endl;
    printArray(arr, row, col);

    return 0;
}