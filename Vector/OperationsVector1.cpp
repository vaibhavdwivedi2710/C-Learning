#include <bits/stdc++.h>
using namespace std;
int main(){
    // for loop
    vector<int>v;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);

        //cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2,6);

        // for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    v.erase(v.end()-2);

    for(int ele:v){
        cout<<ele<<" ";
    }

    

return 0;
}