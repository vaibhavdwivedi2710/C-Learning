#include <iostream>
using namespace std;
// fibonacci number using for loop
int main(){
    int n;
    cin>>n;
    int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
        cout<<fib[n];
        return 0;
}