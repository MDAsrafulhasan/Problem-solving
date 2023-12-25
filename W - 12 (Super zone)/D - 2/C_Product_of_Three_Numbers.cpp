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
        ll cnt = 0;
        ll x = n;
        vector<ll> v;
        for (ll i = 2; i * i <= n; i++)
        {
            if (x % i == 0)
            {
                cnt++;
                v.push_back(i);
                x /= i;
            }
            if (cnt == 2)
            {
                v.push_back(x);
                break;
            }
        }
        if (cnt < 2)
            cout << "NO" << endl;
        else if (v[0] == v[1] || v[0] == v[2] || v[1] == v[2])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << v[0] << " " << v[1] << " " << v[2] << endl;
        }
    }
    return 0;
}