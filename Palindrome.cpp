#include <iostream>  
using namespace std;  
int main()  
{  
  int n,r,sum=0,rev;    
 cin>>n;    
 rev=n;    
 while(n>0)    
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}    
if(rev==sum)    
cout<<sum<<"\n"<<"YES";    
else    
cout<<sum<<"\n"<<"NO";   
  return 0;  
}  