#include<bits/stdc++.h>
using namespace std;

/*bool should_i_swap(int a,int b){
    if(a>b)return true;
    return false;
}*/

/****comparator for int*********/
/*
bool cmp(int a,int b){
    return a>b;
}
*/

/*bool should_i_swap(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first){
if(a.first>b.first)return true;
return false;
}
else{
    if(a.second<b.second)return true;
    return false;
}
    }*/

/*bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first){
if(a.first>b.first)return false;
return true;
}
else{
    if(a.second<b.second)return false;
    return true;
}
    }*/


bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first){
return a.first<b.first;
}
else{
    return a.second>b.second;
}
    }
   

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].first>>a[i].second;
    }
    
//sort(a.begin(),a.end());
sort(a.begin(),a.end(),cmp);
    /*for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(should_i_swap(a[i],a[j])){
                swap(a[i],a[j]);
            }
        }
    }*/
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].first<<" "<<a[i].second<<endl;
    }
    cout<<endl;
    return 0;
}