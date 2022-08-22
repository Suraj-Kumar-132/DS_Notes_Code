#include<bits/stdc++.h>
using namespace std;
 int power(int n,int p)
 {
 	if(p==0)
 	return 1;
 	
 int   	product = n* power(n,p-1);
 	return product;
 }
int main()
{
	int n,p;
	cin>>n>>p;
	cout<< power(n,p);
	return 0;
}
