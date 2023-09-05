#include <iostream>
using namespace std;
int main()
{
    int n,r,sum=0,m;
    cout<<"Enter No."<<endl;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum=m)
    {
        cout<<"It is Armstrong";
    }
    else
    {
        cout<<"NOT Armstrong";
    }
    return 0;
}
