#include <bits/stdc++.h>
using namespace std;
// find the diffrence b/w the sum of element at even indices to the sum of elements at odd indicies
int main(){
   int array[]={1,2,1,2,1,2};
   int anssum=0;
   for(int i=0;i<6;i++){
    if(i%2==0){
        anssum+=array[i];
    }
    else{
        anssum-=array[i];
    }
   }
   cout<<anssum<<endl;
    return 0;
}