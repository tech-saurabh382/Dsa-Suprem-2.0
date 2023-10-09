#include <iostream>
using namespace std;

int main()
{

    // // Array Creation
    // int arr[101];
    // char ch[102];
    // bool flags[223];
    // long num[900];
    // short snum[1000];

    // cout << "Array created successfully" << endl;

    // int arr[100];

    int a = 5;
    cout << "size of a: " << sizeof(a) << endl;
    // cout << "Address of a : " << &a << endl;

    int arr[10];
     cout << "size of arr: " << sizeof(arr) << endl;
    // cout << "Base Address of Arr is : " << &arr << endl;
    // cout << "Base Address of Arr is : " << arr << endl; // These also gives Base Address of Array

    return 0;
}