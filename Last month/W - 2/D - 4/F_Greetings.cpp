#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ordered_set<ll> pbds;
        vector<pair<ll, ll>> v;
        for (int i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        for (auto [x, y] : v)
        {
            pbds.insert(y);
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            // cout<<<<" ";
            ans += pbds.order_of_key(v[i].second);
            pbds.erase(v[i].second);
        }
        cout << ans << endl;
    }

    return 0;
}