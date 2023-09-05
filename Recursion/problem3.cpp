#include <bits/stdtr1c++.h>
using namespace std;
// print N to 1 by using recursion
void printName(int i, int n){
    if(i<1) return;
    cout<<i<<endl;
    printName(i-1,n);
}
int main(){
  int n;
  cin>>n;
  printName(n,n);
}
