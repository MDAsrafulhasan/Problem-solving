#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n];
        ll even = 0, odd = 0;
        ll even_cnt = 0, odd_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even += a[i];
                even_cnt++;
            }
            else
            {
                odd += a[i];
                odd_cnt++;
            }
        }
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            if (x == 0)
            {
                even += (even_cnt * y);
                if (y % 2 != 0)
                {
                    odd_cnt += even_cnt;
                    even_cnt = 0;
                }
            }
            else
            {
                odd += (odd_cnt * y);
                if (y % 2 != 0)
                {
                    even_cnt += odd_cnt;
                    odd_cnt = 0;
                }
            }
            cout << even + odd << endl;
        }
    }
    return 0;
}