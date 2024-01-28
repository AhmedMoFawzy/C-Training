#include<iostream>
using namespace std; 
main( ) 
{     int N,M;
       cin>>N>>M;
      int  arr[N][M];
 	  for(int i=0;i<N;i++)
	  {
	  	for(int j=0;j<M;j++)
	  	{
 	  		cin>>arr[i][j];
		}
	  } 
    
    //   for(int i=N-2;i>=0;i--)
	//   {
	//   	for(int j=M-1;j>=0;j--)
	//   	{
    //         cout<<arr[i][j]<<" ";
 	// 	}
    //     cout<<endl;
        for(int i=0;i<N;i++)
	  {
		for (int  j = M-1; j>=0; j--)
		{
            cout<<arr[i][j]<<" ";
		}	
		  cout<<endl;
  }
}
