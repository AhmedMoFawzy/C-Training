#include <iostream>
#include<iomanip>
using namespace std;
int main(){
     double R , result;
     cin>>R;
     result = 3.141592653*(R*R);
     cout << fixed << setprecision(9);
     cout<<result;
 }