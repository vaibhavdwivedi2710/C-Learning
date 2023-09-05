#include <bits/stdc++.h>
using namespace std;
void DoSomething(string &s){
   s[0]='t';
   cout<<s<<endl;
}
int main(){
    string s ="Raj";
    DoSomething(s);
   cout<<s<<endl;
   return 0;
}