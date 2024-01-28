#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cout<<"Enter Your Name: ";
   // cin>>a;
    getline(cin , a); // if you enterd your name sperated your father name use function getline becuse if u use "cin fun " by back space its fail
    cout<<"Welcome ";
    for(int i=0 ; i< a.length() ; i++){
        cout<<a[i]<<endl;
    }
}
