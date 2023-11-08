#include <iostream>
using namespace std;

void fun(int a[], int n)
{
    cout << "Array Elements are " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    // // Static Memory allocation of array
    // int arr[5] = {1, 2, 3, 4, 5};

    // Dynamic
    int n;
    cin >> n;
    int *arr = new int[n]; // each element would be 0, or garbage

    // Taking n elements input and inserting in array
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arr[i] = data;
    } // 0 index to 4 index;

    // let me try to insert more items;
    // 5-> 14 index;
    for (int i = 0; i < 10;i++)
    {
        arr[n + i] = 80;
    }
    fun(arr, n);

    return 0;
}