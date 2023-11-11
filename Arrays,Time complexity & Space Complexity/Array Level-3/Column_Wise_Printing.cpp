#include <iostream>
using namespace std;

void colWisePrint(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 1, 11},
    };
    int row = 3;
    int col = 4;
    colWisePrint(arr, row, col);

    return 0;
}
