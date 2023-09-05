#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
int main()
{
   int a,b,c,d;
   cin>>a>>b>>c;
   d=b*b-4*a*c;
   if(d=0)
   {
       cout<<"Roots are real and equal"<<endl;
       cout<<-b/2*a<<" "<<-b/2*a;
   }
   else if(d>0)
   {
       cout<<"Roots are real and different"<<endl;
       cout<<(-b+sqrt(d))/2*a<<" "<<(-b-sqrt(d))/2*a;
   }
   else
   {
       cout<<"Roots are imaginary";
   }



    return 0;
}
