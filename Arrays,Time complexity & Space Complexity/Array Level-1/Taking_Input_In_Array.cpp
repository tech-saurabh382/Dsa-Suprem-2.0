#include <iostream>
using namespace std;

int main()
{
    // Taking Input in an Array
    int arr[5];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for index: " << i << " ";
        cin >> arr[i];
        cout << endl;
    }

    // Printing an array
    cout << "Printting the array " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}