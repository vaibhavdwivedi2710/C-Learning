#include <bits/stdtr1c++.h>
using namespace std;
//parameterize way
void f(int i,int sum){
    if(i<0){
    cout<<sum;
    return;
    }
    f(i-1,sum+i);
}
int main(){
    int n;
   cin>>n;
    f(n,0);
}