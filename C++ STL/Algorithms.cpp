#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[4]={1,5,3,2};
    sort(a,a+4);
    vector<int>v(4);
    sort(v.begin(),v.end());
    sort(a+2,a+4);
    //sort(a,a+4,greater<int>);
    
    // my way of sorting for Exp- sort if according to second element if second element is same, then sort it according to first element but in desending order
    pair<int,int>b[3]={{1,2},{2,1},{4,1}};{
    bool comp(pair<int,int>p1,pair<int,int>p2);
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    //  they are same
    if(p1.first>p2.first) return true;
    return false;
    sort(b,b+4,comp);
    }

  
   int num=7;
   int cnt=  __builtin_popcount();
   long long num = 165778784342333;
   int cnt = __builtin_popcountll();


   // all permutation of string
   string s="123";
   sort.s(s.begin(),s.end());
   do{
    cout<<s<<endl;
   }
   while(next_permutation(s.begin(),s.end()));


   int maxi= *max_element(a,a+4);
   int mini = *min_element(a,a+4);




    return 0;
}