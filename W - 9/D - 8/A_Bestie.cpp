#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i<n; i++)
        {
            cin >> a[i];
        }

        int gcd=a[0];
        for(int i=1;i<n;i++)
        {
            gcd=__gcd(gcd,a[i]);
        }

        if (gcd == 1)
        {
            cout << 0 << endl;
            continue;
        }
        // if (n == 1)
        // {
        //     cout << 0 << endl;
        //     continue;
        // }

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int t = a[i];
            a[i] = __gcd(a[i], i + 1);
            int g = a[0];
            for (int j = 1; j < n; j++)
            {
                g = __gcd(g, a[j]);
            }
            if (g == 1)
            {
                ans = min(ans, (n - i));
            }
            a[i] = t;
        }

        for (int i = 0; i < n; i++)
        {
            int t = a[i];
            a[i] = __gcd(a[i], i + 1);
            for (int j = i + 1; j < n; j++)
            {
                int tt = a[j];
                a[j] = __gcd(a[j], j + 1);
                int g = a[0];
                for (int k = 1; k < n; k++)
                {
                    g = __gcd(g, a[k]);
                }
                if (g == 1)
                {
                    ans = min(ans, (n - i) + (n - j));
                }
                a[j] = tt;
            }
            a[i] = t;
        }
        cout << ans << endl;
    }
    return 0;
}