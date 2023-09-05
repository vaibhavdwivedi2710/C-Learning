#include <bits/stdc++.h>
using namespace std;
// inserting an element at specific position in array
int insertElement(int arr[],int n,int position,int value){
    for(int i=n;i>=position;i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=value;
}
int main(){
    int n=7;
    int arr[n]={1,2,3,4,5,6,7};
    int position=4;
    int value=10;
    insertElement(arr,n,position,value);
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}