#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }

   /* for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << (*it) << endl;
    }  */
}

int main()
{
    unordered_set<string> s;
    s.insert("abc"); // O(1)
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");

    /*auto it = s.find("abc");// O(1)
    if(it!=s.end()){
        s.erase(it);
    }

s.erase("bcd");*/

    print(s);
    return 0;
}
