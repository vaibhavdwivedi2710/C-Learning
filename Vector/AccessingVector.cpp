#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v(5);
   cout<<v.size()<<endl;
   v.resize(8);
   cout<<v.size()<<endl;
   cout<<v.capacity();
    return 0;
}