#include <iostream>
using namespace std;
int main() {
    int x ;
    cin>>x;
    int nums [x];
    int p=0;
    for(int i=0; i<x;i++)
    {
        cin>>nums[i];
    }
    
        for(int j =0;j<x;j++) 
        {
           if (nums[j]!=nums[x-(1+j)])
        {
            cout<<"NO";
            p=1;
            break;
        } 
        
        }
    
    if(p==0)
    {
        cout<<"YES";
    }
 
    return 0;
}