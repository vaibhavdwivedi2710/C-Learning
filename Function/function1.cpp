#include <iostream>
using namespace std;

int Add(int num1, int num2){
    int sum= num1+num2;
    return sum;
}
int Add(int num1, int num2, int num3){
    int sum= num1+num2+num3;
    return sum;
}
float Add(float num1, float num2){
    float sum=num1+num2;
    return sum;
}
int main()
{
   int a;
   cout<<"a=";
   cin>>a;
   int b;
   cout<<"b=";
   cin>>b;
   cout<<Add(a,b)<<endl;
   cout<<Add(a,b,1)<<endl;
   return 0;
}