#include<bits/stdc++.h>
using namespace std; 
int main( ) 
{     int N;
       cin>>N;
      int  arr[N][N];
 	  for(int i=0;i<N;i++)
	  {
	  	for(int j=0;j<N;j++)
	  	{
 	  		cin>>arr[i][j];
		}
	  } 
	  long long sum1=0 ,sum2=0;
	  for (int  i = 0; i < N; i++)
	  {
		sum1 += arr[i][i];
		sum2 += arr[i][N-1-i];
	  }
	 cout<<abs(sum1-sum2);
      
}
/*
4
1 5 12 1
2 -4 6 7
3 8 5 9
3 5 23 -6

*/