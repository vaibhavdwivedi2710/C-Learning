#include <bits/stdc++.h>
using namespace std;
// palindrome number between a range 
bool isPalindrome(int n){
   int dup=n;
   int RevNum=0;
   while(n>0){
   int digit=n%10;
   n=n/10;
   RevNum=RevNum*10+digit;
   }
   if(RevNum==dup)
   return true;
   else 
   return false;
}
int main(){
   int min=10;
   int max=100;
   for(int i=min;i<=max;i++){
      if(isPalindrome(i)){
         cout<<i<<" ";
      }
   }
   return 0;
}