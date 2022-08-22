#include <bits/stdc++.h>
using namespace std;

int difference(int arr[],int num)
{
    int diff =0;
    int same =0;

 

    for(int i=0 ;i<num;i++)
    {
        int n = arr[i];
           unordered_map<int ,int> mp;

           while(n>0)
           {
               mp[n%10]++;
               n = n/10;

           }
           auto it = mp.begin();

           int freq = (*it).second;

           int flag =0;

          for (auto it = mp.begin(); it != mp.end(); it++)
           {
               if((*it).second != freq)
               {
                   flag =1;break;
               }
               
           }
           if(flag)
           diff += arr[i];
           else
           same += arr[i];
    }

    return abs(same- diff);



}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<difference(arr,n);
    return 0;
}
