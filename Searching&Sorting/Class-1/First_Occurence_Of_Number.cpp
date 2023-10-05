#include <iostream>
using namespace std;

int findFirstOccurence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2; // Hey wala integer over flow kara skta hai

    // Best Practice (Important)
    // int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // ans store
            ans = mid;
            // left mai jao
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            // right nai jao
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            // left mai jao
            end = mid - 1;
        }
        // galti yaha karte hai hamesha
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {30, 30, 30, 30, 30, 30, 70, 80, 90};
    int target = 30;
    int n = 9;

    int ansIndex = findFirstOccurence(arr, n, target);

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