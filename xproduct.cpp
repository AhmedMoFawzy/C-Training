#include <iostream>
using namespace std;
int main(){
    int a ,s,d;
    cin>>a>>s;
    for (int i = a; i < s; i++)
    {
        d = a *i*s;
     }
     if (d >0)
     {
        cout<<"Positive";
     }else if (d<0)
     {
        cout<<"Negative";
     }else if(d==0){
        cout<<"Zero";
     }
     
     
}