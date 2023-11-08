#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, x;
    cin >> n >> x;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = INT_MAX;
    ll ans, sum;
    while (l <= r)
    {
        sum = 0;
        ll mid = l + (r - l) / 2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mid)
            {
                sum += (a[i] - mid);
            }
        }
        if (sum >= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}