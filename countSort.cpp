#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[],int n)
{
	int k=arr[0];
	for(int i=0;i<n;i++)
	{
		k= max(k,arr[i]);
		
	}
	int count[100]={0};
	for(int i=0;i<n;i++)
	{
		count[arr[i]]++;
		
	}
	//ab count array  ko modify karenge matlb
	// next  index me add karte jaise previous value 
	// isse count pata chalte jaiyenge ek ek element ka
	// kitna hai array me
	for(int i=1;i<=k;i++)
	count[i]+= count[i-1];
	
	int output[n];
	for(int i=n-1;i>=0;i--)
	{
		// pre- decrement matlb 
		//pehle jo value hai  modified count array
		// me usko decrement fir initilise karenge output array me
		
		output[--count[arr[i]]]= arr[i];
			
	}
	//ab jo hai output array ko original array me dal denge
	for(int i=0;i<n;i++)
	{
		arr[i]= output[i];
	}
	
}
int main()
{
	int n;
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	countSort(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		
		return 0;
}
