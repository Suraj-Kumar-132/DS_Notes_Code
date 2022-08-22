#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     
        while(n--)
        {
            int N;
            cin>>N;
        
           vector<long long>vec;
           vec.push_back(0);
           for(int i=1;i<=N;i++)
           {
               long long x;
               cin>>x;
               vec.push_back(x);

           }
           int k;
           cin>>k;
           cout<<vec[k]<<endl;

        }
        return 0;
}