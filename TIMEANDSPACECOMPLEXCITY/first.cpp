#include <bits/stdc++.h>
using namespace std;
int sum_in_range(int x, int y){
    int result=0;
    for(int i=x;i<=y;i++){
        result+=i;
    }
    return result;
}
int sum_in_range_optimized(int x, int y){
    int n=(y-x+1);
    int a=x;
    int result=(n*(2*a+(n-1)*1))/2;
    return result;
}
int main(){
    cout<<sum_in_range_optimized(2,6);
    return 0;
}