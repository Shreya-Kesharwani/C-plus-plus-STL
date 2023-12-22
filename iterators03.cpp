#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};

    // iterator declaration
    // vector<int>::iterator it;
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    // short way to print iterator
    for (int value : v)
    {

        cout << value << " ";
    }
    cout << endl;

    // print pair of vector
    vector<pair<int, int>> vp = {{1, 2}, {2, 3}};
    for (/*pair<int,int>*/ auto &value : vp)
    {

        cout << value.first << " " << value.second << endl;
        ;
    }

    /****passing reference******/
    /*for(int &value : v){
        value++;
       // cout<<value<<" ";
    }

    for(int value : v){
         cout<<value<<" ";
    }
    cout<<endl;*/

    auto a = 1.0;
    cout << a << endl;
    return 0;
}
