#include<bits/stdc++.h>
using namespace std;
long long  M = 1e9+7;
long long fastPower(int x,int y)
{
    long long temp =1;

    while(y>0)
    {3
        if ( y%2==1)
         temp = temp*x %M;
         x = x*x %M;
         y/=2;
    }
    return temp;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<fastPower(x,y);
    return 0;
    
}