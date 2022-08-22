#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);

    }
    // bubble sort 

    for(int round = 1; round <n ;round ++)
    {
        for(int i=0;i <= n-round;i++)
        {
            if(vec[i]> vec[i+1])
            swap(vec[i],vec[i+1]);
        }
    }
        for(int i=0;i<n;i++)
        {
            cout<<vec[i]<<" ";
        }
}