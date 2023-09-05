#include <iostream>
using namespace std;
int main()
{
    char s[100];
    char s1[100];
    cout<<"Enter your Name ";
    cin.get(s,100);
    //cin.getline(s,100);
    cout<<"Welcome "<<s<<endl;

    cin.ignore();

    cout<<"Enter your Name Again ";
    cin.get(s1,100);
    //cin.getline(s1,100);
    cout<<"Welcome "<<s1<<endl;
    return 0;


}
