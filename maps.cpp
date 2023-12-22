#include <bits/stdc++.h>
using namespace std;
void print(map<int,string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    //   m["abcd"]="abcd";  // s.size()*log(n)
    // map ek data structure hai jo key values ,pair ko store karte hai
    // key se lekar value tak ki mapping create hoti hai
    map< int,string> m;
    m[1] = "abc"; // O(log(n))
    m[5] = "cdc";
    m[3] = "edc";
    m[6] = "a";
    m[1] = "shreya";

    auto it = m.find(5);
   /* m.erase(it); // log(n)
    m.clear();*/

   /* if(it==m.end()){
        cout<<"No value";
    }else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }*/

    print(m);

    /*
     map<int, string>::iterator it;
     for (it = m.begin(); it != m.end(); ++it)
     {
         cout << (*it).first << " " << (*it).second << endl;
     }*/

    // map ki saari keys unique hoti hai
    // maps values ko sorted order me store karte hai
    return 0;
}
