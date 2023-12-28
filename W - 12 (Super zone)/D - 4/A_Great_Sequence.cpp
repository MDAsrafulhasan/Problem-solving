#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] != -1)
            {
                ll tr = a[i] * x;
                ll main = -1;
                ll l = i + 1, r = n - 1;
                while (l <= r)
                {
                    ll mid = l + ((r - l) / 2);
                    if (a[mid] == tr)
                    {
                        main = mid;
                        r = mid - 1;
                    }
                    else if (a[mid] < tr)
                    {
                        l = mid + 1;
                    }
                    else
                    {
                        r = mid - 1;
                    }
                }
                if (main == -1)
                {
                    cnt++;
                }
                else
                {
                    a[main] = -1;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}