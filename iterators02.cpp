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
    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    
    //vector of pair iterator declaration
    vector<pair<int,int>>::iterator it;
    for(it=v_p.begin();it !=v_p.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }


/************other way of writng the same code************/
    /*for(it=v_p.begin();it !=v_p.end();++it){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }*/


    //(*it).first <=> (it->first)

     return 0;
}