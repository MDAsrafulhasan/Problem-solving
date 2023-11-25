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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int pres = a[i];
            for (int j = 2; j * j <= pres; j++)
            {
                while (pres % j == 0)
                {
                    m[j]++;
                    pres /= j;
                }
            }
            if (pres > 1)
            {
                m[pres]++;
            }
        }
        bool isit = true;
        for (auto [x, y] : m)
        {
            if (y % n != 0)
            {
                isit = false;
                break;
            }
        }
        (isit) ? cout << "YES" << endl : cout << "NO" << endl;
        // if (isit)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
    }
    return 0;
}