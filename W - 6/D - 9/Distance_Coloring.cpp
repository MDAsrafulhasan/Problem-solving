#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll sum_k = 1;

        // for (ll i = 1; i <= k; i++)
        // {
        //     sum_k = (sum_k * i) % MOD;
        // }
        if (n == 1)
        {
            cout << k << endl;
        }

        else
        {
            ll ans = 1;

            for (ll i = 1,z=k; i <= min(n, k); i++,z--)
            {
                ans = (ans * z);
                ans %= MOD;
            }
            cout << ans << endl;
        }
    }
    return 0;
}