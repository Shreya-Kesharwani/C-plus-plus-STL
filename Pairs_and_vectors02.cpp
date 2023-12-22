/*#include<bits/stdc++.h>
using namespace std;


void printVec(vector<int> v){
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
        //v.size->O(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);
    }
    printVec(v);
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for(int i = 0; i < v.size(); ++i)
    {
        //v.size->O(1)
        cout << v[i]<<" ";
    }
    v.push_back(2);
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(7);
     v.push_back(6);

   /* printVec(v);
    v.pop_back();
    printVec(v);*/

// vector<int>v2=v;//O(n)       //v2 v ki copy bana
/*  vector<int>&v2=v;//reference pass kiya hai
  v2.push_back(5);
  printVec(v);
   printVec(v);
  printVec(v2);
  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string> &v){
    cout<<"size: "<<v.size()<<endl;
    for(int i = 0; i < v.size(); ++i)
    {
        //v.size->O(1)
        cout << v[i]<<" ";
    }

    cout<<endl;
}
int main()
{
    vector<string> v;
   int n;
   cin>>n;
   for(int i=0;i<n;++i){
    string s;
    cin>>s;
    v.push_back(s);

   }
   printVec(v);
    return 0;
}*/
