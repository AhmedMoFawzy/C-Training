#include <bits/stdc++.h>
using namespace std;
int main(){
int count;
cin>>count;
int arr[count];
for(int i=0;i<count;i++)
{
     cin>>arr[i];
}
int min;
for(int i=0;i<count;i++)
{
  for(int j=i+1;j<count;j++)
  {

     if(arr[j]<arr[i])
     {
              min=arr[j];
       arr[j]=arr[i];
       arr[i]=min;

     }

  }
 cout<<arr[i]<<" ";
}

} 


