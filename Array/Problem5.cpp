#include <bits/stdc++.h>
using namespace std;
//
void RepeatingElement(int arr[],int n){
  int cnt=0;
  int dup[n];
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]==arr[i]){
            dup[cnt++]=arr[i];
        }
    }
  }
  for(int i=0;i<cnt;i++){
     if(dup[i] != dup[i+1]) 
       cout<<dup[i]<<" ";
  }
}
void findRepeatingElements(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    
    cout<<"The repeating elements are: ";
    for(int i=0;i<arr.size()-1;i++) 
        if(arr[i] == arr[i+1]) cout<<arr[i]<<" ";
}
int main(){
    int n=8;
    int arr[n]={1,2,1,2,3,4,5,4};
    RepeatingElement(arr,n);
    return 0;
}

