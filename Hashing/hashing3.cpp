#include <bits/stdc++.h>
using namespace std;
// chracter hashing for lower case string
int main(){
    string s;
    cin>>s;
    //precompute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetching
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}