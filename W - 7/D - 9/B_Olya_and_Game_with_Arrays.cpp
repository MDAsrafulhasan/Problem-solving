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
        vector<vector<ll>> v(n);
        for (ll i = 0; i < n; i++)
        {
            ll m;
            cin >> m;
            for (ll j = 0; j < m; j++)
            {
                ll x;
                cin>>x;
                v[i].push_back(x);
                // cin >> v[i][j];
            }
        }
        for (ll i = 0; i < n; i++)
        {
            sort(v[i].begin(), v[i].end());
        }
        ll mn2=__LONG_MAX__, mn1=__LONG_MAX__;
        for (ll i = 0; i < n ; i++)
        {
            mn2 = min(v[i][1], mn2);
        }

        for (ll i = 0; i < n ; i++)
        {
            mn1 = min(v[i][0], mn1);
        }
        ll sum = 0,cnt=0;
        for (ll i = 0; i < n ; i++)
        {
            if (v[i][1] == mn2 && cnt==0)
            {
                cnt++;
                continue;
            }
            sum += v[i][1];
        }
        sum += mn1;
        cout << sum << endl;
    }
    return 0;
}