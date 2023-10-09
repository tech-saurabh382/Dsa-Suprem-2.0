#include <iostream>
using namespace std;

int incrementBy1(int &k)
{
    k = k * 109;
}

int main()
{

    int n;
    cin >> n;
    incrementBy1(n);
    cout << "n: " << n << endl;

    return 0;
}