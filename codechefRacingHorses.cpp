#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> vec;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            vec.push_back(x);
        }
        long long ans = abs(vec[1] - vec[0]);

        for (ll i = 0; i < n; i++)
        {
            for (ll j = i+1; j < n; j++)
            {
                long long diff = abs(vec[j] - vec[i]);

                ans = min(ans, diff);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
