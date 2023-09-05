#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     while(a>0 && b>0){
//         if(a>b) a=a%b;
//         else b=b%a;
//     }
//     if(a==0) cout<<b;
//     else cout<<a;
// }
int GCD(int a,int b){
    if(a>b)
    return (b,a%b);
    else 
    return (b%a,a);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);
    return 0;
}