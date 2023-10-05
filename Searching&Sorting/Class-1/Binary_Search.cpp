#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    // There is some flow in the below line, HW?
    int mid = (start + end) / 2;

    while (start <= end)
    {
        // found
        if (arr[mid] == target)
        {
            // Return index of the found element
            return mid;
        }
        else if (target > arr[mid])
        {
            // Right mai jao
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            // Left mai jao
            end = mid - 1;
        }
        // Mid updated
        mid = (start + end) / 2;
    }

    // Arag yaha tk pohohche ho
    // iska matlab element nahi mila tumhe
    return -1;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int target = 90;
    int n = 9;

    int ansIndex = binarySearch(arr, n, target);

    if (ansIndex == -1)
    {
        cout << "Element Not Found " << endl;
    }
    else
    {
        cout << "Element Found at Index " << ansIndex << endl;
    }

    return 0;
}