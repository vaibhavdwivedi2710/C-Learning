#include <iostream>
using namespace std;
/*program for counting number of negative and positive numbers in
an array */
int main()
{
int a[100],n,zero=0,pos=0,neg=0;
cout<<"Enter the size of an Array:\n";
cin>>n;
cout<<"Enter the element:\n";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"Element in Array is Given Below\n";
for(int i=0;i<n;i++)
{
    if(a[i]>0)
        pos++;
    else if (a[i]<0)
        neg++;
    else
        zero++;
}
cout<<"\nPositive No. is="<<pos;
cout<<"\nNegative No. is="<<neg;
cout<<"\nTotal zero in array is="<<zero;
return 0;
}
