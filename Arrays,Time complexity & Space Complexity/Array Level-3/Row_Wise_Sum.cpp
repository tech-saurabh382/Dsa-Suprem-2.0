#include <iostream>
using namespace std;

void rowWiseSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Sum of " << i + 1 << " Row is :  " << sum << endl;
    }
}

int main()
{

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 70, 8},
        {9, 10, 1, 11},
    };

    int row = 3;
    int col = 4;

    rowWiseSum(arr, row, col);

    return 0;
}