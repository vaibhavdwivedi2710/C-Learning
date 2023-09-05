#include <bits/stdc++.h>
using namespace std;
void DectoBinary1(int n){
    int ans=0;
    int i=0;
    while(n!=0){
    int digit =n%2;
    n=n/2;
    ans =digit*(pow(10,i))+ans;
    i++;
    }
    cout<<ans<<endl;
}
void DectoBinary2(int n){
    // storing remainder in binary array
    int binaryNum[32];
    int i=0;
    // storing remainder in binary array
    while(n>0){
       binaryNum[i]=n%2;
       n=n/2;
       i++; 
    }
    //printing binary array in reverse order
    for(int j=i-1;j>=0;j--)
    cout<<binaryNum[j];
}
void DectoBinary3(int n){
    // by using bitwise operator
  for(int i=31;i>=0;i--){
    int k=n>>i;
    if(k &1)
    cout<<"1";
    else
    cout<<"0";
  }
}
int main(){
    int n;
    cin>>n;
    DectoBinary3(n);
    return 0;
}