#include <iostream>
#include<utility>
using namespace std;
//Pairs - are the part of utility Library 
int main(){
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>>p1={1,{3,4}};
    cout<<p.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;
  //array type pair
    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[2].first<<" "<<arr[2].second;
    return 0;

}