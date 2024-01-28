#include <iostream>
using namespace std;
void array(int x[] ,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<x[i]<<endl;
    }
    
}
int main(){
    int a[5] = { 4, 5, 7 , 6 ,9};
    array(a ,5);

}
