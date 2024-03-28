#include <iostream>
using namespace std;

int findLength(char ch[], int size)
{

    int index = 0;
    while (ch[index] != '\0')
    {
        index++;
    }
    return index;

    // int length = 0;

    // for (int i = 0; i < size; i++)
    // {
    //     if (ch[i] == '\0')
    //     {
    //         // ruk jao
    //         break;
    //     }
    //     else
    //     {
    //         length++;
    //     }
    // }
    // return length;
}

void reverseString(char ch[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++, j--;
    }
}

int main()
{

    char ch[100];

    // cin>>ch;
    cin.getline(ch, 100);

    cout << "Before " << ch << endl;
    int len = findLength(ch, 100);
    reverseString(ch, len);
    cout << "After " << ch << endl;

    return 0;
}