#include <bits/stdc++.h>
using namespace std;
// bubble sort code to understand best case time complexity
void Bubble_Sort(int arr[],int n){
  for(int i=n-1;i>=0;i--){
    int didswap=0;
    for(int j=0;j<=i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            int didswap=1;
        }
    }
    if(didswap==0){
    break;
    }
    cout<<"runs\n";
  } 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Bubble_Sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
