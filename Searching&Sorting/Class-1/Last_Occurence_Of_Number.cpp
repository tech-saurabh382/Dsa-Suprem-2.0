#include <iostream>
using namespace std;

int findLastOccurence(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;

    // Best practice
    //  int mid = s + (e-s)/2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans store
            ans = mid;
            // right mai jao
            s = mid + 1;
        }
        else if (target > arr[mid])
        {
            // right mai jao
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            // left mai jao
            e = mid - 1;
        }
        // galti yaha hoti hai hamesha
        mid = (s + e) / 2;
    }
    return ans;
}

int main()
{

    int arr[] = {30, 30, 30, 30, 30, 30, 70, 80, 90};
    int target = 30;
    int n = 9;

    int ansIndex = findLastOccurence(arr, n, target);

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