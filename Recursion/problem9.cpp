#include <bits/stdtr1c++.h>
using namespace std;
//parameterize way to solve factorial 
void f(int i,int fact){
    if(i<1){
    cout<<fact;
    return;
    }
    f(i-1,fact*i);
}
int main(){
    int n;
   cin>>n;
    f(n,1);
}