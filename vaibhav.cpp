#include <bits/stdc++.h>
using namespace std;
void LeftRoate(int arr[],int n,int d){
   int temp[d];
   for(int i=0;i<n;i++){
      temp[i]=arr[i];
   }
   for(int i=d;i<n;i++){
      arr[n-d]=arr[i];
   }
   for(int i=n-d;i<n;i++){
      arr[i]=temp[i-(n-d)];
   }
}
int main(){
   int n=8;
   int k=3;
   int arr[8]={1,2,3,4,5,6,7,8};
   LeftRoate(arr,n,k);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   return 0;
}