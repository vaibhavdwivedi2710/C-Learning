#include <bits/stdc++.h>
using namespace std;
// reverse of an array
void printRevArray(int arr[],int n){
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
}
// by using ans array
void RevArray(int arr[],int n){
     int ans[n];
   for (int i = n - 1; i >= 0; i--) {
      ans[n - i - 1] = arr[i];
   }
   printRevArray(ans,n);
}
// by using 2 pointer 
void RevArray1(int arr[],int n){
    int p1=0;int p2=n-1;
    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }
}

int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   RevArray(arr,n);
   return 0;
}

// by using recursion
#include <iostream>

using namespace std;
//Function to print array
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
//Function to reverse array using recursion
// void reverseArray(int arr[], int start, int end) {
//    if (start < end) {
//       swap(arr[start], arr[end]);
//       reverseArray(arr, start + 1, end - 1);
//    }
// }
// int main() {
//    int n = 5;
//    int arr[] = { 5, 4, 3, 2, 1 };
//    reverseArray(arr, 0, n - 1);
//    printArray(arr, n);
//    return 0;
// }