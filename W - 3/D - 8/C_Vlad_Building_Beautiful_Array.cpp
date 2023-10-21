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
        int mn_even = INT_MAX;
        int mn_odd = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                mn_even = min(mn_even, a[i]);
            }
            else
            {
                mn_odd = min(mn_odd, a[i]);
            }
        }

        int c[n];
        if (mn_even < mn_odd)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    c[i] = a[i];
                }
                else
                {
                    c[i] = a[i] - mn_odd;
                }
            }
        }

        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    c[i] = a[i];
                }
                else
                {
                    c[i] = a[i] - mn_odd;
                }
            }
        }

        bool isit = false;
        int cnt_even = 0;
        int cnt_odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (c[i] % 2 == 0)
            {
                cnt_even++;
            }
            if (c[i] == 0)
                isit = true;
            else
                cnt_odd++;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << c[i] << " ";
        // }

        // cout << " = " << cnt_even << " " << cnt_odd << " = ";

        if (cnt_even == n && isit == false)
        {
            cout << "YES" << endl;
        }
        else if (cnt_odd == n &&isit == false)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}