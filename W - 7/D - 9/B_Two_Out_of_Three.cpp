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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        vector<ll> v;
        for (auto it : mp)
        {
            if (it.second > 1)
            {
                v.push_back(it.first);
            }
        }
        if (v.size() < 2)
            cout << -1 << endl;
        else
        {
            for (auto val : a)
            {
                if (val == v[0])
                {
                    v[0]=-1;
                    cout << 2 << " ";
                }
                else if (val == v[1])
                {
                    v[1]=-1;
                    cout << 3 << " ";
                }
                else
                    cout << 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}