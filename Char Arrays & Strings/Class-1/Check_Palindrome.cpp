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

bool checkPalindrome(char ch[], int n)
{
    // n-> length of string
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    // agar yah pohjoch gaye ho
    // iska matlab saare characters match kr gye h
    // iska matlab palindrome hai
    // iska matlab true return karna
    return true;
}

int main()
{
    char ch[100];
    cin.getline(ch, 100);

    int len = findLength(ch, 100);

    bool isPalindrome = checkPalindrome(ch, len);

    if (isPalindrome)
    {
        cout << "Valid Palindrome" << endl;
    }
    else
    {
        cout << "Invalid Palindrome" << endl;
    }

    return 0;
}