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
    ll n, q;
    cin >> n >> q;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n,greater<ll>());
    ll b[n];
    b[0] = a[0];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        b[i] = sum;
    }

    for (int i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        if (x > b[n - 1])
        {
            cout << -1 << '\n';
            continue;
        }
        ll l = 0, r = n - 1, ans;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (b[mid] >= x)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}