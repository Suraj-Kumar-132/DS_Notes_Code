#include<bits/stdc++.h>
using namespace std;
// pending hai


int main()
{
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	// two pointer approach 
	// brute force approach hai

	int start=0,end = N;
	int count=0;
	int mx = 0;
	if(arr[0]==0)
	{
	cout<<"-1";
	}
	while(start< end)
	{
		mx = max( mx, arr[start]);
	    start += mx;
	    count++;
	 } 
	 cout<<count++;
}
