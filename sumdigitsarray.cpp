// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
// long long n,sum=0,s;
// cin>>n;
// int a[n];
// cin>>s;
// for(int i=0;i<n;i++){
//     a[i]=s%10;
//     s/=10;
//     sum+=a[i];
// }
// cout<<sum;
// }
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n,sum=0;
    char s;
    cin >> n;
    while (n--){
        cin >> s;
        sum+=s-'0';
    }
    cout<<sum;
}