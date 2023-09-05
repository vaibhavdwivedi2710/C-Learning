#include <iostream>
using namespace std;
/*program for linear
search*/
int main()
{
    int A[10],n=5,Key;
    cout<<"Enter Numbers"<<endl;
    for(int i=0; i<n;i++)
      {
          cin>>A[i];
      }
      cout<<"Enter Key"<<endl;
      cin>>Key;
      for(int i=0;i<n;i++)
      {
          if(Key==A[i])
          {
              cout<<"found at"<<i;
              return 0;
          }
      }

          cout<<"Not found";

      return 0;

}
