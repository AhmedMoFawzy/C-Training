#include <iostream>
using namespace std;
int main(){
       int a,y,m,d;
       cin>>a;
       y=a/365;
	   a=a%365;
	   m=a/30;
	   d=a%30;
       cout<<y<<" years"<<endl;
       cout<<m<<" months"<<endl;                                 
       cout<<d<<" days"<<endl;                            

       }