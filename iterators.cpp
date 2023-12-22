#include<iostream>
#include<vector>
using namespace std;
//iterators c++ stl ka ek bahut hi crucial hissa hai jo hame containers ki value ko access karne me help karte hai unko change karne me help karte hai basically unko uper jobhi operations hai unko  perform karne me help karte hai containers ki values ke uper
//iterators pointers jaise structures hote hai
//iterators container ke elements ko point karte hai

int main()
{
    vector<int> v={2,3,5,6,7};
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //iterator declaration
    vector<int>::iterator it=v.begin();
    for(it=v.begin();it !=v.end();++it){
        cout<<(*it)<<endl;
    }
      
       
        //it++ -> next iterator
    //it+1 -> next location
    //for vectors it+1 and it++ both are same but for maps,sets  it is not same

    return 0;
}
