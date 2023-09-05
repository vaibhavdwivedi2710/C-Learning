//space complexity is extra memory space requied for analysis or to slove problem
#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    int arr[n+1];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
    //time complexity=O(n),space compexity=O(n)
}
int fibonacci_optimized(int n){
    int a=0;
    int b=1;
    int c=1;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
  //time complexity=O(n),space compexity=O(1)   
}
//print the nth fibonacci number.
int main(){
  int n;
  cin>>n;
  cout<<fibonacci_optimized(n);
  return 0; 
}