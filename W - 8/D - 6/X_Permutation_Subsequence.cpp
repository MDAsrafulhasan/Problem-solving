#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll pre = 1, x;
        ll cnt = 0;
        for (ll i = 1; i <= n; i++)
        {
            x = pre * mp[i];
            x %= N;
            cnt += x;
            cnt %= N;
            pre = x;
        }
        cout << cnt << endl;
    }
    return 0;
}