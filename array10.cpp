#include <iostream>
using namespace std;
/* pattern 2 */
int main()
{
    for(int i=0;i<15;i++)
    {
        for(int j=0;j<15;j++)
        {
            if(i>=j)
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
