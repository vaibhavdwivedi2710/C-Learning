#include <iostream>
using namespace std;
/*pattern 3*/
int main()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        if(i+j>10-1)
        cout<<"*";
        else
        cout<<" ";
        cout<<endl;

    }

    return 0;

}
