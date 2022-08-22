#include<bits/stdc++.h>
using namespace std;

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
	int start=0,end = N;
	int count=0;
	while(start< end)
	{
	    start += arr[start];
	    count++;
	 } 
	 cout<<count++;
}
