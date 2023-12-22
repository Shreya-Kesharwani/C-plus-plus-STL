/*
Given N strings and Q queries. IN each query you
 are given a string print yes if string is present
 else print no.
 N<=10^6
 |S|<=100
 Q<=10^6
 */

#include <bits/stdc++.h>
using namespace std;
void print(multiset<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
}
int main()
{
    /*
    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string str;
        cin>>str;
        s.insert(str);
    }
    int m;
    cin>>m;
   while(m--){
    string str;
    cin>>str;
    if(s.find(str)==s.end()){
        cout<<"No\n";
    }
    else{
        cout<<"Yes\n";
    }
   }
   */

    // Multiset hame set me multiple values ko set me insert karne ko allow karta hai

    multiset<string> s;
    s.insert("abc"); // O(logn)
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");

    auto it = s.find("abc"); // O(1)
    if (it != s.end())
    {
        s.erase(it);
    }

    // s.erase("abc");
    // s.erase me agar avlue paas karoge aur agar value
    // multiple times present hai to vo dono delete ho jayengi
    // and  agar iterator paas kerenge to ek hi value delete hogi
    print(s);

    return 0;
}
