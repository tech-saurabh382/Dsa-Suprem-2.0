#include <iostream>
using namespace std;

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
    // create a 2D Array
    // int arr[3][3];

    // Initialize 2D Array
    // int arr[3][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 1, 11},
    // };

    // int brr[] = {1, 2, 3, 4};

    // int crr[][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 1, 11},
    // };

    // int drr[][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 1, 11},
    // };

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 1, 11},
    };
    int row = 3;
    int col = 4;
    printArray(arr, row, col);

    return 0;
}