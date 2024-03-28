#include <iostream>
using namespace std;

void convertToUpperCase(char ch[], int n)
{
    int index = 0;

    while (ch[index] != '\0')
    {
        // check if lowercase, then convert to uppercase
        if (ch[index] >= 'a' && ch[index] <= 'z')
        {
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch, 100);

    cout << "Before: " << ch << endl;
    convertToUpperCase(ch, 100);
    cout << "After: " << ch << endl;

    return 0;
}