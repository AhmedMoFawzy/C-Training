#include <iostream>
#include <math.h>
using namespace std;
int main(){
    cout<<"*************************************\n";
    cout<<"    Solving Quadratic Equation\n";
    cout<<"          a*x*x+b*x+c\n";
    cout<<"*************************************\n";
    double a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    double x,temp;
    temp = b*b-4*a*c;
    temp = sqrt(temp);
    x =(-1*b + temp)/2*a;
    cout<<"X1= "<<x<<endl;
    x =(-1*b - temp)/2*a;
    cout<<"X2= "<<x<<endl;
    int j;
    cout<<"Press on Eny Key To Exit";
    cin>>  j;
  return 0;
}