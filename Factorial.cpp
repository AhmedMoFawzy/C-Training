#include <iostream>
using namespace std;
int main(){
    int x;
Ahmed: 
    long long fact=1;
    cout<<"Enter Your Number: ";
    cin>>x;
    for (int  i = 1; i<=x; i++)
    {
        fact*=i;
    }
    cout<<"Factorial Of \""<<x<<"\" Is: "<<fact<<endl;
       
goto Ahmed;   
    return 0;
}