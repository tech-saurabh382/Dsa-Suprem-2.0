#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    cout << "Printing vector " << endl;
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

void print2(vector<int> v)
{
    cout << "Printing vector method 2 " << endl;
    for(auto it: v){
        cout<<it<<" ";
    }
   
    cout << endl;
}

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    print(v);
    print2(v);

    // vector<char> v;
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('c');
    // v.push_back('d');

    // cout << "Front element: " << v[0] << endl;
    // cout << "Front element: " << v.front() << endl;
    // cout << "End element: " << v[v.size() - 1] << endl;
    // cout << "End element: " << v.back() << endl;

    // // Vector initialization
    // vector<int>arr; // default with no data, 0 size
    // vector<int>arr2(5,-1); // init with n size with specific data
    // // arr2.push_back(50);
    // // print(arr2);

    // vector<int>arr3 = {1,2,3,4,5};
    // // arr3.pop_back();
    // // print(arr3);

    //  vector<int>arr4{1,2,3,4,5};
    // //  print(arr4);

    // // how to copy vector
    // vector<int>arr5 = {1,2,3,4,5};
    // vector<int>arr6{arr5};
    // print(arr6);

    // // in vector, dont tell the size of vector.
    // // just keep inserting, i will manage the allocations
    // vector<int> v; // array hi hai

    // // while (1)
    // // {
    // //     int d;
    // //     cin >> d;
    // //     v.push_back(d);
    // //     cout << "Capacity: " << v.capacity() << " Size: " << v.size() << endl;
    // // }

    // // // insert
    // // v.push_back(1);
    // // v.push_back(2);
    // // v.push_back(3);

    // // print(v);

    // // pop -> delete -> END
    // // 1 -> 2 -> 3

    // // v.pop_back();
    // // print(v);

    // // v.pop_back();
    // // print(v);

    // // v.pop_back();
    // // print(v);

    // // v.pop_back();
    // // print(v);

    // // insert
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int d;
    //     cin >> d;
    //     v.push_back(d);
    // }
    // print(v);

    // // for (int i = 0; i < 10; i++)
    // // {
    // //     v.push_back(80);
    // // }

    // // I Want to clear the vector
    // v.clear();
    // v.push_back(50);

    // print(v);

    // // pop
    // v.pop_back();
    // print(v);

    return 0;
}