#include <bits/stdc++.h>
using namespace std;

/* unordered maps
1. inbuilt implementation
2. Time complexity
3. valid keys datatype
*/

//complex data structure ka hash function internally defined nhi hota hai toh unhe hum unordered masps me use nhi kar sakte hai

void print(unordered_map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    unordered_map<int, string> m;
    m[1] = "abc"; // O(1)
    m[5] = "cdc";
    m[3] = "edc";
    m[6] = "a";
    m[1] = "shreya";
   
     auto it = m.find(3);//O(1)
    
     if(it!=m.end())
     m.erase(it); // log(1)
    // m.clear();

    /*if(it==m.end()){
        cout<<"No value";
    }else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }*/

    print(m);

    return 0;
}
