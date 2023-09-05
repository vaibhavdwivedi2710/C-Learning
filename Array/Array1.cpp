#include <bits/stdtr1c++.h>
using namespace std;
// sum of all array elements
int main(){
    int array[]={3,4,6,8,9};
    int size=sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int i=0;i<size;i++){
        sum=array[i]+sum;
    }
    cout<<sum<<endl;
    return 0;
}