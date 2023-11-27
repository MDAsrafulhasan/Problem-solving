#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x = min(a[i], b[i]);
            ll y = max(a[i], b[i]);
            if (x * 2 >= y)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}