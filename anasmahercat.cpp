#include <iostream>
#include<cmath>
using namespace std;

int main() {
     int a,b,c;
     cin>>a>>b>>c;
     for(int i=a;i>=0;i--){
        if(2*i<=b&&4*i<=c){
            cout<<i+2*i+4*i;
             break;
        }
    }
    return 0;
      
      
     

}
/*// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
int main() {
int x=0, a,b,c;
cin >>a;
cin >>b;
cin >>c;
while (true)
{
if (a>=1 && b>=2 && c>=4)
{
x+=7 ;
a-- ;
b-=2 ;
c-=4 ;
}
else 
{break;}
}
cout<<x;
}*/
