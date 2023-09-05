#include <bits/stdc++.h>
using namespace std;
//cout the number of occarences of a particular element x
int main(){
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter x:";
    int x;
    cin>>x;
    int occurences=0;
    for(int ele:v){
        if(ele ==x){
            occurences++;
        }
       
    }
  cout<<occurences<<endl;
    
    return 0;
}