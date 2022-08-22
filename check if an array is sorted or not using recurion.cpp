
#include<bits/stdc++.h>
using namespace std;
bool checkSorted(int arr[],int n)
{
 if(n==1)
 return true;// agar ek element present hoga tb to wo array by default sorted hoga hi na yahi base case hai
 	bool restArray = checkSorted (arr+1,n-1);
 	
 	return  (arr[0]< arr[1] && restArray);
	
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
cout<< checkSorted(arr,n);
	return 0;
}
