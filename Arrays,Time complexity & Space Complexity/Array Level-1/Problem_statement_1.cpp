#include <iostream>
using namespace std;

int main()
{

    int arr[10];
    // Taking Input
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Printing after taking input" << endl;

    // Print

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;

    // Double up the value
    cout << "Doubles: " << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2 * arr[i];
    }

    // Printing Double value
    cout << "Printing after taking doubles" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}