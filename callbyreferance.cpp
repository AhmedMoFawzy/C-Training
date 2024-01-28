#include <iostream>
using namespace std;

void add(int &x, int &y){
    x++;
    y++;
}
int main(){
    int x= 3, y= 4;
    add(x,y);
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
}


         