#include <bits/stdc++.h>
using namespace std;
// serach if a given element is present in the array or not.if it is not present 
//then return -1 else return the index
int main(){
int array[]={3,6,9,12,15};
    int key=12;
     int ans=-1;
     for(int i=0;i<5;i++){
        if(key==array[i]){
         ans=i;
         break;
         }
     }
     cout<<ans<<endl;
    return 0;
}