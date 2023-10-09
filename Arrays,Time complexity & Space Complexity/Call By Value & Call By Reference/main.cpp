#include <iostream>
using namespace std;

int main()
{

    int n = 5; // normal integer variable

    // k is a Reference Variable referring to n;
    int &k = n; // name given to 'n'......

    // k is a Reference Variable referring to n;
    int &c = n; // name given to 'n'......

    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    k++;

    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    // int &t = 6; -> invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'

    return 0;
}