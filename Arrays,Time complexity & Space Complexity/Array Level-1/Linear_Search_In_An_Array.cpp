#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Present -> True
// Absent -> False

bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            // found
            return true;
        }
    }
    // not found
    return false;
}

int main()
{

    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int target = 10;

    bool ans = linearSearch(arr, size, target);

    if (ans == 1)
    {
        cout << "Target Found" << endl;
    }
    else
    {
        cout << "Target Not Found" << endl;
    }

    // // Function call
    // printArray(arr,size);

    // int arr[5] = {2,4,6,8,10};
    // int target = 11;
    // int n = 5;

    // bool flag = 0;
    // // 0-> not found
    // // 1-> found

    // for(int i = 0; i< n; i++){
    //     if(arr[i] == target){
    //         //found
    //         flag = 1;
    //         break;
    //     }
    // }

    // if(flag == 1){
    //     cout<<"Target Found";
    // }
    // else{
    //     cout<<"Target Not Found";
    // }

    return 0;
}