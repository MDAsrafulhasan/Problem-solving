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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = n;
        ll mainsum = 0;
        for (int i = 0; i < n; i++)
        {
            ll cnt = 0;
            mainsum += a[i];
            ll sum = 0;
            ll mx = i + 1;
            bool isit = false;
            for (int j = i + 1; j < n; j++)
            {
                sum += a[j];
                cnt++;
                if (j == n - 1 && sum == mainsum)
                {
                    mx = max(mx, cnt);
                    isit = true;
                    break;
                }
                if (sum == mainsum)
                {
                    mx = max(mx, cnt);
                    sum = 0;
                    cnt = 0;
                }
                if (sum > mainsum)
                {
                    break;
                }
            }
            if (isit)
                ans = min(ans, mx);
        }
        cout << ans << endl;
    }
    return 0;
}