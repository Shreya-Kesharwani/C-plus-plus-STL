#include <iostream>
using namespace std;

int main()
{
    pair<int, string> p;

    //taking input of pair and then print it 
    cin>>p.first;
    cout<<p.first;


    // p=make_pair(2,"abc");
    p = {2, "abcd"};
    // pair<int,string> p1=p;
    pair<int, string> &p1 = p; // reference
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for (int i = 0; i < 3; i++)
    {
       cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    
    return 0;
}
