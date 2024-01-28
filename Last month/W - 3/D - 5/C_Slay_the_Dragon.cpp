#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        ll ans, coin = 0, s = 0, c = 0;
        auto it = lower_bound(v.begin(), v.end(), x);
        if (it == v.end())
        {
            ans = v[n - 1];
            if (ans < x)
            {
                coin = x - ans;
            }
            s = sum - ans;
            if (s < y)
            {
                coin += (y - s);
            }
        }
        else
        {
            ans = v[it - v.begin()];
            if (ans < x)
            {
                coin = x - ans;
            }
            s = sum - ans;
            if (s < y)
            {
                coin += (y - s);
            }
            if (it - v.begin() != 0)
            {
                ans = v[it - v.begin() - 1];
                if (ans < x)
                {
                    c = x - ans;
                }
                s = sum - ans;
                if (s < y)
                {
                    c += y - s;
                }
                coin = min(coin, c);
            }
        }
        cout << coin << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }

    return 0;
}