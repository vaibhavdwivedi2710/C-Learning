#include <iostream>
using namespace std;
// function protoype
int Add(int,int);
int main(){
   int add= Add(4,5);
     cout<<add;
    return 0;
}
int Add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}