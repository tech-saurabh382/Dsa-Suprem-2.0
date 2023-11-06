#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int n)
{
    int zerocount = 0;
    int oneCount = 0;
    // StepA: Count 0 and 1
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zerocount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }

    // // StepB: place all zeros first
    // int i;
    // for (i = 0; i < zerocount; i++)
    // {
    //     arr[i] = 0;
    // }
    // // StepB: place all ones first
    // for (int j = i; j < n; j++)
    // {
    //     arr[j] = 1;
    // }

    // EASY WAY
    int index = 0;
    while (zerocount--)
    {
        arr[index] = 0;
        index++;
    }
    while (oneCount--)
    {
        arr[index] = 1;
        index++;
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0};
    int n = 14;

    sortZeroOne(arr, n);

    // Printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}