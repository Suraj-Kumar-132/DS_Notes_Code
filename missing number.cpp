#include<bits/stdc++.h>
using namespace std;
	const int M = 1e5+12;
	
	
int  main()
{int hash[M]={0};
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n-1;i++)
     cin>>arr[i];
     
     long long int prevSum =0;
     long long int finalSum =0;
     prevSum = n*(n+1)/2;
     for(int i=0;i<n-1;i++)
     finalSum += arr[i];
     
     cout<<prevSum - finalSum<<endl;
     return 0;
}
