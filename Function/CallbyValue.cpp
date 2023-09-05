#include <iostream>
using namespace std;
// pass by value -parameter values are copied to another variables
void changevalue(int z){
    z=100; //formal parametars
}
int main(){
    int a=5;
    changevalue(a); // actual parameters
    cout<<a;
}