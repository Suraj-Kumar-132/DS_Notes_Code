
#include<bits/stdc++.h>
using namespace std;
 int factorial(int n)
 {
 	if(n==0)
 	return 1;
 	int facto = n* factorial(n-1);
 	return facto;
 }
int main()
{
	int n;
	cin>>n;
	cout<< factorial(n);
	return 0;
}
