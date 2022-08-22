#include<bits/stdc++.h>
using namespace std;
//It is a fast searching algorithm with time complexity O(logn).
// Based on divide and conquer.
// Data item should be in sorted manner.


// Iterative Approach
void BinSearch(vector<int>vec, int num, int X){
   int low = 0;
   int high = num -1;
   while(low <= high){
    int mid = (low + high)/2;
    if( vec[mid]== X)
    cout<<"Found";
    else if( vec[mid] < X)
    {
        low = mid+1;
    }
    else{
        high = mid -1;
    }

   }

}
int main(){
    int num;
    cin>>num;

    vector<int>vec(num);
    for(int i=0;i<num;i++){
        cin>>vec[i];

    }
    int x;
    cin>>x;

    BinSearch(vec,num,x);
      



}