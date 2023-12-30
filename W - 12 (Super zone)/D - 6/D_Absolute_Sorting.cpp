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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll x = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                // int y = ceil((a[i] + a[i + 1]) / 2);
                x = max(x, ((a[i] + a[i + 1]+1) / 2));
            }
        }

        for (ll i = 0; i < n; i++)
        {
            a[i] = abs(a[i] - x);
        }
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                x = -1;
            }
        }
        cout << x << endl;
    }
    return 0;
}