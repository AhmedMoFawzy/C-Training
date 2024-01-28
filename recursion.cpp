#include <iostream>
#include <math.h>
using namespace std;
int add(int n){
    if(n != 0){
        return n + add(n-1);
    }
    return 0; // you can write else
}
int main() {
     cout<<add(5);
} 
