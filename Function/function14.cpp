#include <iostream>
using namespace std;
/*Define two functions to print the maximum and 
the minimum number respectively among three numbers entered by user. */
int Max(int x,int y, int z){
    if(x>y && x>z){
        return x;
    }
    else if(y>z && y>x){
        return y;
    }
    else {
        return z;
    }
}
int Min(int x,int y,int z){
    if(x<y && x<z){
        return x;
    }
    else if(y<z && y<x){
        return y;
    }
    else {
        return z;
    }
}
int main() {
    int a=4,b=6,c=9;
    cout<<Max(a,b,c)<<endl;
    cout<<Min(a,b,c)<<endl;
    
    return 0;
}