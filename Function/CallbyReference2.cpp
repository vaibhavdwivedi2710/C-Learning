#include <iostream>
using namespace std;
void ChangeValue(int &y, int &z){
    y=90;
    z=100;
}
int main(){
    int a=5;
    int b=6;
    ChangeValue(a,b);
    cout<<a<<" "<<b<<endl;
}