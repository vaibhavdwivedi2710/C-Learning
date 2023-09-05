#include <iostream>
using namespace std;
float Add(float num1,float num2){
    float sum =num1+num2;
    return sum;
}
int main()
{
    float c=3.4;
    float d=4.2;
    cout<<Add(c,d)<<endl;
    return 0;
}