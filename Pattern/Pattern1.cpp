#include <bits/stdc++.h>
using namespace std;
void Print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
     cout<<endl;
    }
}
void Print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
     cout<<endl;
    }
}
void Print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
    cout<<endl;
    }
}
void Print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void Print7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void Print8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void Print10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i >n) stars =2*n-i;

        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    }
void Print11(int n){
    int start =1;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else start =0;
        for(int j=0;j<=i;j++){
          cout<<start;
          start = 1-start;  
        }
        cout<<"\n";
    }
}
void Print12(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        //spaces
        for(int j=1;j<=space;j++){
            cout<<" ";
            
        }
        //numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
    cout<<"\n";
    space =space-2;
    }
}
void Print13(int n){
    int num =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num=num+1;
        }
      cout<<endl;
    }
   
}
void Print14(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";  
        }
      cout<<endl;
    }
   
}
void Print15(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+(n-i);ch++){
            cout<<ch<<" ";
        }
     cout<<endl;
    }
}
void Print16(int n){
  for(int i=0;i<n;i++){
    char ch='A'+i;
    for(int j=0;j<=i;j++){
        cout<<ch<<" ";
    }
    cout<<endl;
  }
}
void Print17(int n){
    for(int i=1;i<=n;i++){
        //space 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //alphabet
        char ch='A';
        int breakpoint =(2*i-1)/2;
        for(int j=1;j<=2*i-1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }

        //space
        for(int j=1;j<=n-i;j++){
            cout<<" ";}
        
        cout<<endl;
    }
}
void Print18(int n){
   for(int i=0;i<n;i++){
    for(char ch='E'-i;ch<='E';ch++){
        cout<<ch<<" ";
    }
    cout<<"\n";
   }
}
void Print19(int n){
    for(int i=0;i<n;i++){
        
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }

        //spaces
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }

        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
       
        cout<<"\n";
    }
       
       int t=2*n-2;
     for(int i=1;i<=n;i++){
        
        //stars
     for(int j=1;j<=i;j++){
            cout<<"*";
        }

        //spaces
        for(int j=t;j>0;j--){
            cout<<" ";
        }
        t=t-2;

        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
       
        cout<<"\n";

    }
}  
void Print20(int n){
    int spaces= 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n) star=2*n-i;
        //stars
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
    cout<<"\n";
    if(i<n) spaces-=2;
    else spaces+=2;
    }
}
void Print21(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1|| j==1 || i==n || j==n){
            cout<<"*";
            }
            else cout<<" ";
        }
    cout<<endl;
    }
}
void Print22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left =j;
            int right =(2*n-2)-j;
            int down=(2*n-2)-i;
            cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        Print14(n);
    }
}
/*int main(){
    int n;
    cin>>n;
    Print22(n);
}*/
