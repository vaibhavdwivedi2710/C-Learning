#include <bits/stdc++.h>
using namespace std;
//cout the number of element strictly greater than value x
int main(){
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter x:";
    int x;
    cin>>x;

    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
  cout<<count<<endl;
    return 0;
}