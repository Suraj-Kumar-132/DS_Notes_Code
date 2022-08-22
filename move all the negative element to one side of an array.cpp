#include <bits/stdc++.h>
using namespace std;
  
// this is approach 1
void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

// This is two pointer approach
 
// Function to shift all the
// negative elements on left side
void shiftall(int arr[], int left,
              int right)
{
   
  // Loop to iterate over the
  // array from left to the right
  while (left<=right)
  {
    // Condition to check if the left
    // and the right elements are
    // negative
    if (arr[left] < 0 && arr[right] < 0)
      left+=1;
     
    // Condition to check if the left
    // pointer element is positive and
    // the right pointer element is negative
    else if (arr[left]>0 && arr[right]<0)
    {
      int temp=arr[left];
      arr[left]=arr[right];
      arr[right]=temp;
      left+=1;
      right-=1;
    }
     
    // Condition to check if both the
    // elements are positive
    else if (arr[left]>0 && arr[right] >0)
      right-=1;
    else{
      left += 1;
      right -= 1;
    }
  }
}
 
 void printArray(int arr[],int n)
 
 {
 	for(int i=0;i<n;i++)
 	{
 		cout<<arr[i]<<" ";
	 }
 }
 int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
// approach1:
 	rearrange(arr,n);
 // approach 2:
 // shiftall(arr,0,n-1);
	printArray(arr,n);
	return 0;
}
