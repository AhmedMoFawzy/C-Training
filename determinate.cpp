#include<iostream>
using namespace std;
 
int main()
{
	int rows, columns, determinant, determMatrix[2][2];
	
 	for(rows = 0; rows < 2; rows++)	
	{
		for(columns = 0; columns < 2; columns++) 
		{
			cin >> determMatrix[rows][columns];
		}		
	}
	
	determinant = ((determMatrix[0][0] * determMatrix[1][1]) - 
					(determMatrix[0][1] * determMatrix[1][0]));
 
 	cout<< determinant;	
  
 	return 0;
}