#include <iostream>
using namespace std;
int main(){
     char op;
     int x,y;
Ahmed:
     cout<<"Enter First Number: ";
     cin>>x;
     cout<<"Enter Second Number: ";
     cin>>y;
     cout<<"Enter Operation: ";
     cin>>op;    
     switch (op)
     {
     case '+' : cout<<x+y<<endl;
     break;

     case '-' : cout<<x+y<<endl;
     break; 

     case '/' : cout<<x/y<<endl;
     break; 

     case '%' : cout<<x%y<<endl;
     break;

     case '*' : cout<<x*y<<endl;
     break;
     default: 
         cout<<"There's No Mathematics Operations like This\n";
     }
    goto Ahmed;  
    return 0;
}
