#include<bits/stdc++.h>
using namespace std;

int main()
{
    //jis bhi data structure par hum ye lagane wale hai vo sorted hone chahiye
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
/*auto it=lower_bound(a.begin(),a.end(),5);
ifit==a.end())){
cout<<"Not found";
}
cout<<(*it)<<endl;*/

 /*auto it=upper_bound(a.begin(),a.end(),5);
if(it==a.end()){
cout<<"Not found";
}
cout<<(*it)<<endl;*/

auto it=upper_bound(a.begin()+4,a.end(),5);
if(it==a.end()){
cout<<"Not found";
}
cout<<(*it)<<endl;

    return 0;
}
