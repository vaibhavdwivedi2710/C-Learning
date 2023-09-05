#include <bits/stdc++.h>
using namespace std;
string Decimal2Binary(int num)
{
    string str;
    while(num){
        if(num&1)//1
        str+='1';
        else //0
        str+='0';
        num>>1; //right shift by 1
    }
    return str;
}
void reverse(string str)
{
    for(int i=str.size()-1;i>=0;i--)
    cout<<str[i];
}
int main(){
    int num;
    cin>>num;
    reverse(Decimal2Binary(num));
    return 0;
}