#include <iostream>
using namespace std;
int main(){
     int a,b;
     double c ,o1 ,o2 ,o3;
     char s ,q;
     cin>>a>>s>>b>>q>>c;
     o1 = a + b;
     o2 = a - b;
     o3 = a * b;
     if (s =='+')
     {
         if (c == o1)
         {
            cout<<"Yes"<<endl;
         }else
         {
            cout<<a+b<<endl;
         }   
     }else if (s == '-')
     {
        if (c == o2)
        {
            cout<<"Yes"<<endl;
        }else
        {
            cout<<a-b<<endl;
        }
     }else if (s == '*')
     {
        if (c == o3)
        {
            cout<<"Yes"<<endl;
        }else
        {
            cout<<a*b<<endl;
        }       
     }
}