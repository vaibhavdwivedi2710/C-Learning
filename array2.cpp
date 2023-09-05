#include <iostream>
using namespace std;
int main ()
{
    int  A[6]={4,6,9,5,2,7};
    int sum=0;
    for(int i=0;i<6;i++)
    {
        sum=sum+A[i];

    }
    cout<<"sum is"<<sum;
    return 0;
}
