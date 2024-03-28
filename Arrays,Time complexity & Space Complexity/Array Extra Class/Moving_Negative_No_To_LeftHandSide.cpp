#include <iostream>
using namespace std;

void shiftNegativeOneSide(int arr[], int size)
{
    int j = 0;
    // j-> memory block hai jaha pr main negative
    // number store kr skta hu
    for (int index = 0; index < size; index++)
    {
        // index -> entier array ko traverse karnay k liye
        if (arr[index] < 0)
        {
            swap(arr[index], arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[] = {23, -7, 12, -10, -11, 40, 60};
    int size = 7;

    shiftNegativeOneSide(arr, size);

    // Print
    cout << "Printing the Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}