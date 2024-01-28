#include <iostream>
using namespace std;
int main(){
    int x[3];
    for (int i = 0; i < 3; i++)
   {
      cout<<"Enter Elements: " <<i+1 ;
      cin>>x[i] ;
   }
   
   for (int j = 0; j < 3; j++)
   {
    cout<<"x[" <<j<<"]" <<x[j]<<endl;
   }
   
    return 0;
}