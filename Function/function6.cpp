#include <iostream>
using namespace std;
int p=5;
void print(){
    cout<<p;
}
int main(){
   int p=7; 
   cout<<p; //7
   p++;   
   cout<<p; //8
   print(); //5
   // scope resolution operator
   cout<<::p; //5
    
}