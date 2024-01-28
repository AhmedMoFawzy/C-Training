#include <iostream>
using namespace std;
int main(){
    double a,s,d;
    cin>>a>>s>>d;
    if (a >= s && a>=d)
    {
        if (s>d)
        {
            cout<<d<<" "<<a<<endl;
        }else
        {
            cout<<s<<" "<<a<<endl;
        }
        
    }else if (s >= a && s>=d)
    {
        if (a>d)
        {
            cout<<d<<" "<<s<<endl;
        }else
        {
            cout<<a<<" "<<s<<endl;
        }
    }else if (d >=a && d>=s)
    {
       if (s>a)
        {
            cout<<a<<" "<<d<<endl;
        }else
        {
            cout<<s<<" "<<d<<endl;
        }
    } 
    return 0;
}