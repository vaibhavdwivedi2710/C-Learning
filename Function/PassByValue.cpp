//pass by value by striver
#include <bits/stdc++.h>
using namespace std;
void Dosomething(int num){
cout<<num<<endl;
num+=5;
cout<<num<<endl;
num+=5;
cout<<num<<endl;
}
int main(){
    int num=10;
  Dosomething(num);
  cout<<num<<endl;
    return 0;
}

