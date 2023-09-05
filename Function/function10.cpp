#include <iostream>
using namespace std;
// print the area and circumference of circle
double Area(int r){
    return 3.14*(r*r);
}
double Circumference(int r){
    return 2*3.14*r;
}
int main(){
    int r=3;
    cout<<Area(r)<<endl;
    cout<<Circumference(r)<<endl;
    return 0;
}