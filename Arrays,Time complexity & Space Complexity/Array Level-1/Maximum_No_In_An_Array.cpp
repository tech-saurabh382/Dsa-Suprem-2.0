#include <iostream>
#include <limits.h>
using namespace std;

int findMaximumInArray(int arr[], int size)
{
    int maxAns = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxAns)
        {
            maxAns = arr[i];
        }
    }

    return maxAns;
}

int main()
{

    int arr[10] = {3, 56, 78, 34, 56, 33, 43, 22, 1, 3};
    int size = 10;

    int ans = findMaximumInArray(arr, size);

    cout << "Maximum no in an Array is: " << ans << endl;

    return 0;
}