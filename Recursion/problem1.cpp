#include <bits/stdtr1c++.h>
using namespace std;
// print name n times by using recursion
void printName(int i, int n){
    if(i>n) return;
    cout<<"Vaibhav"<<endl;
    printName(i+1,n);
}
int main(){
  int n;
  cin>>n;
  printName(1,n);
}
