#include<bits/stdc++.h>
using namespace std;

int main()
{
    //jis bhi data structure par hum ye lagane wale hai vo sorted hone chahiye
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
/*int *ptr=lower_bound(a,a+n,5);
if(ptr==(a+n)){
cout<<"Not found";
}
cout<<(*ptr)<<endl;*/

int *ptr=upper_bound(a,a+n,5);
if(ptr==(a+n)){
cout<<"Not found";
}
cout<<(*ptr)<<endl;

/*int *ptr=upper_bound(a+4,a+n,5);
if(ptr==(a+n)){
cout<<"Not found";
}
cout<<(*ptr)<<endl;*/

    return 0;
}
