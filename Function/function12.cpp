#include <iostream>
using namespace std;
//program for printing all odd number b/w given 2 numbers
bool isOdd(int num){
    if(num%2==0){
        //number is even
        return false;
    }
    else{
        //number is even
        return true;
    }
}
int main(){
    int a=1,b=10;
    for(int i=a;i<=b;i++){
        if(isOdd(i)){
        cout<<i<<" ";
        }
    }
    return 0;
}