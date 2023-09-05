#include <iostream>
using namespace std;
/*finding minimum element of an array
*/
int main()
{
    int A[6]={2,4,6,8,10,12};
    int min,n=6;
    min=A[0];
    for(int i=0;i<6;i++)
    {if (A[i]<min)

        A[i]=min;
    }

    cout<<"Min Number is"<<"  "<<min<<endl;

    return 0;

}
