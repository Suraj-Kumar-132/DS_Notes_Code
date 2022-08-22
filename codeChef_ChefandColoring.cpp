#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
       int n;
       cin>>n;
        string str;
        cin>>str;
          unordered_map<char,int> mpp;
        for(int i =0;i<str.length();i++)
        {
          
            mpp[str[i]]++;


        }
      
      int maximum = INT_MIN;
        for(auto it = mpp.begin(); it!= mpp.end();it++)
        {
            maximum = max(maximum,(*it).second);

        }
        cout<<n-maximum<<endl;

    }
    return 0;
}