#include <bits/stdtr1c++.h>
using namespace std;
// functional way to solve factorial of n
int f(int n){
if(n==1){
  return 1;
}
else 
return n*f(n-1);
}
int main(){
    int n;
    cin>>n;
 cout<<f(n);
 return 0;
}