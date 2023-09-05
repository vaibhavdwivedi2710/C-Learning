#include <bits/stdc++.h>
using namespace std;
// iterator are point to the memory where elemnet is lying
vector<int>v(5,20);
vector<int>::iterator it =v.begin();
//it++;
for(auto it=v.begin();it!=v.end;it++){
    cout<<*(it)<<" ";
}
cout<<*(it)<<" ";

