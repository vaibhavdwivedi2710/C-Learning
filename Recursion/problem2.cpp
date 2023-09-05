#include <bits/stdtr1c++.h>
using namespace std;
// print 1 to N by using recursion
void printName(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    printName(i+1,n);
}
int main(){
  int n;
  cin>>n;
  printName(1,n);
}
