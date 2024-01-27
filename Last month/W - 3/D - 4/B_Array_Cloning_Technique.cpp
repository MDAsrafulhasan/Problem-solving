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
    cin>>n;
    ll a[n];
    map<ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a,a+n);
    ll mx=0;
    for(auto val:mp)
    {
        mx= max(mx,val.second);
    }
    int cnt=0;
    while(mx<n)
    {
        ll r = n-mx;
        ll add=mx;
        cnt++;
        cnt+=min(add,r);
        mx+=min(r,add);
    }
    cout<<cnt<<'\n';

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