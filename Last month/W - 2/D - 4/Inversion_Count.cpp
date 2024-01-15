#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ordered_set<ll> pbds;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            
            // pbds.insert(x);
        }
        ll ans=0;
        for (int i = n-1; i >=0; i--)
        {
            if(i==n-1)
            pbds.insert(a[i]);
            else
            {
                ans+= pbds.order_of_key(a[i]);
                pbds.insert(a[i]);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}