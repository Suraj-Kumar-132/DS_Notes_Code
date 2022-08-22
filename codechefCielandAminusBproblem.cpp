#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int ans = b-a;
    if(ans%10 ==9)
    cout<<ans-1<<endl;
    else
    cout<<ans+1<<endl;
}
