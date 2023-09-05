#include <bits/stdc++.h>
using namespace std;
// print 1 to N without using recursive function f(i+1,N)
void print(int i,int n){
    if(i<1) return ;
    print(i-1,n);
    cout<<i<<endl;
}
int main(){
  int n;
  cin>>n;
  print(n,n);

}