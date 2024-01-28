#include <iostream>
using namespace std;
int main(){
    unsigned long long a ,s,d;
     cin>>a>>s>>d;
     if (a +s<d && a+d<s && d+s<a)
     {
       cout<<"Invalid";
     }
   
     else if (a == s && s == d)
     {
        cout<<"Equilateral";
     }else if (a == s || s==d || a==d)
     {
        cout<<"Isosceles";
     }else if (  a +s>d && a+d>s && d+s>a )
     {
        cout<<"Scalene";        
     }
         
     return 0; 
}