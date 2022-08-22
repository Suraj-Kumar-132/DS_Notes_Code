#include<bits/stdc++.h>
using namespace std;

int getPairCount(int arr[],int n,long long k)
{
// brute force approach
//   long long  sum =0;
//   int count =0;
//   for(int i=0;i<n;i++)
//   {
//   	
//   		for(int j=i+1;j<n;j++)
//   		{
//   			sum = arr[i]+ arr[j];
//   			if(sum ==k)
//   			count++;
//   		
//		}
//	}
//	return count;

////my logic
// not success

int count =0;
int l=0;
int r=n-1;
sort(arr,arr+n);
while(l<r)
{
	if(arr[l]+ arr[r] <k)
	l++;
	 else if( arr[l]+ arr[r] >k)
	 r--;
	 else
	 { 
	 count++;
	 r--  ;
	  
	 
	 }
	
	}	
}



int main()
{
	int n;
	cin>>n;
	int arr[n];
	long long k;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<getPairCount(arr,n,k);
	return 0;
}

