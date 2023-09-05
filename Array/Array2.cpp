#include <bits/stdc++.h>
using namespace std;
// maximum element of array
int main(){
    int arr[]={4,6,8,13,9};
    int max=0;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
} 