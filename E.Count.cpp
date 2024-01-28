#include <bits/stdc++.h>
using namespace std;
int main(){
     int sum = 0;
     string s;
     getline(cin,s);
     for (int i = 0; i < s.size(); i++)
     {
       sum += s[i]-'0';  // take a look at Asci code
     }
     cout<<sum;
}