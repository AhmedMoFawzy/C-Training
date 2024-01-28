#include <iostream>
using namespace std;
int main()
{
	unsigned long long a , b , c;
	cin>>a>>b>>c;
	if((a+b < c)|| (a+c < b)||(b+c < a))
	{
	    cout<<"Invalid";
	    return 0;
	}
	// if all sides are equal
	if((a==b)&&(b==c)&&(c==a))
	{
	    cout<<"Equilateral";
	}
	// if(there is just two equal sides)
	else if((b==c && a!=b)||(a==b && b!=c)||(a==c && a!=b))
	{
	    cout<<"Isosceles";
	}
	// if there is now matches sides
	else{
	    cout<<"Scalene";
	}
}