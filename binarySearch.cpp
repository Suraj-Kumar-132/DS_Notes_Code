#include <bits/stdc++.h>
using namespace std;

int binarySearchIteerative(vector<int>vec,int low,int high,int k)
{
   

    while(low<=high)
    {  
      int   mid =  (low +high)/2;
        if(vec[mid]== k)
        return mid;
        if(vec[mid]<k)
         low = mid +1;
        if(vec[mid]>k)
         high = mid - 1;
        
    }
    return -1;


}
int binarySearchRecursive(vector<int> vec,int low,int high,int k)
{
     if(low <= high)
     {
          int mid =  (low +high)/2;
    if(vec[mid]== k)
    return mid;

    if(vec[mid] >k)
    return binarySearchRecursive(vec,low,mid-1,k);

    if(vec[mid]<k)
    return binarySearchRecursive(vec,mid+1,high,k);

     }
     return -1;

   

}



int main()
{
    int n;
    vector <int> vec;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);

    }
    int k;
    cin>>k;
    // we apply binary search when array is sorted
    // or agar sorted nhi hai to sorted kar lenge tb apply karenge
  // cout<<binarySearchIteerative(vec,0,n-1,k)<<endl;
  cout<<binarySearchRecursive(vec,0,n-1,k)<<endl;
return 0;

}