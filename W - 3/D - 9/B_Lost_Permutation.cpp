#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        int mx = INT_MIN;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
            mp[a[i]]++;
        }

        // for(auto it=mp.begin();it!=mp.end();it++)
        // {
        //     cout<<it->first<<" "<<it->second<<endl;
        // }

        sort(a, a + n);
        bool isit = true;
        int i;
        for (i = 1; i <= mx; i++)
        {
            if (!mp.count(i))
            {
                if (m == 0)
                {
                    isit = false;
                    break;
                }

                if (m - i >= 0)
                {
                    m = m - i;
                    mp[i]++;
                }
            }
        }

        while (m >= 0)
        {
            if (m - i >= 0)
            {
                mp[i]++;
            }
            else
            {
                mp[m]++;
                break;
            }
            m = m - i;
            if (m == 0)
            {
                break;
            }
            i++;
        }

        // if (isit)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
        int cnt = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second != 1)
                isit = false;
        }
        if (isit)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}