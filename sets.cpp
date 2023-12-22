#include <bits/stdc++.h>
using namespace std;

// maps me se agar hum value wala part hata denge
// toh sirf keys bachengi aur unhe hum kehte hai sets.
// sets basically keys ka set hota hai

// set elements ko sorted order me store karta hai
//set unique elements ko store karta hai
void print(set<string> &s)
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
    set<string> s;
    s.insert("abc"); // log(n)
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");

    /*auto it = s.find("abc");// log(n)
    if(it!=s.end()){
        s.erase(it);
    }*/

s.erase("bcd");

    print(s);
    return 0;
}
