#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
float x, p ;
cin>> x >>p;
x = 100 - x;
p = p/x;
p = p *100;
//cout<<p;
cout << fixed << setprecision(2) <<p;

}