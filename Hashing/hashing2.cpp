#include <bits/stdc++.h>
using namespace std;
// chracter coounting in a string by for loop 
int Count(char c,string &s){
    int cnt=0;
    for( int i=0;i<s.size();i++){
        if(s[i]==c){
            cnt++;
        }
    }
    return cnt;

}
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    cout<<Count(c,s);
    return 0;
}