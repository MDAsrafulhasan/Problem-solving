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
        ll s[n], f[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        vector<ll> v;
        v.push_back(f[0] - s[0]);
        for (ll i = 1; i < n; i++)
        {
            if (f[i - 1] > s[i])
            {
                v.push_back(f[i]-f[i-1]);
            }
            else
            {
                v.push_back(f[i]-s[i]);
            }
        }
        for(ll val: v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}