#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long A, B, n;
        cin >> A >> B >> n;
      if(n%2==0)
      {
          cout<<max(A,B)/min(A,B)<<endl;
      }
      else
      {
          A*=2;
          cout<<max(A,B)/min(A,B)<<endl;

      }
       
    }
    return 0;
}