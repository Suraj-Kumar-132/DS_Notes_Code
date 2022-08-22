#include<bits/stdc++.h>
using namespace std;

bool isSafe(int **arr, int x,int y, int n)
{
	for(int row=0;row<x;row++)
	{
		// jha queen place kar denge wha pe 1 likh denge
		if(arr[row][y]==1)
		{
			return false;
		}
	}
	// diagonal check karne hai to uske liiye do iterator bnane parege
	 int row =x;
	 int col =y;
//	 while me condition ye check krenge ki
//  row or col ko minus karte karte kahi zero to nhi ho gya
	 while(row>=0 and col >=0)
	 {
	 	if(arr[row][col]==1)
	 	{
	 		return false;
		 }
		 row--;
		 col--;
		 }	
		 row =x;col=y;
		 while(row>=0 and col <n)
	 {
	 	if(arr[row][col]==1)
	 	{
	 		return false;
		 }
		 row--;
		 col++;
}
return true;
}
bool nQueen(int **arr,int x,int n)
{
	if(x>=n)
	{
		return true;
	}
	for(int col=0;col<n;col++)
	{
		if(isSafe(arr,x,col,n))
		{
			arr[x][col]=1;
			if(nQueen(arr,x+1,n)){
			return true;
		}
		arr[x][col]=0 ; //backtraking;
		
		}
		
	}
	return false;
}
int main()
{	int n;
	cin>>n;
	
	 int** arr = new int*[n];
	 	 for(int i=0;i<n;i++)
	 	 {
	 	 	arr[i] = new int[n];
	 	 	for(int j=0;i<n;j++)
	 	 	{
	 	 		arr[i][j]=0;
			  }
		  }
		  if(nQueen(arr,0,n))
		  {
		  	 for(int i=0;i<n;i++)
				 {
	 					for(int j=0;i<n;j++)
	 					{ 
	 						cout<<arr[i][j]<<" ";
		 				}
		 				cout<<endl;
					 }
		  	
		  }
	
	
}
