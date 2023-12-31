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
        vector<int> a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i].resize(x);
            for (int j = 0; j < a[i].size(); j++)
            {
                cin >> a[i][j];
                v.push_back(a[i][j]);
            }
        }
        int ans = INT_MIN;
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()),v.end());
        for (int x = 1; x <= 50; x++)
        {
            vector<int> vv;
            for (int i = 0; i < n; i++)
            {
                bool isit = false;
                for (int j = 0; j < a[i].size(); j++)
                {
                    if (a[i][j] == x)
                    {
                        isit = true;
                        break;
                    }
                }
                if (!isit)
                {
                    for (int j = 0; j < a[i].size(); j++)
                    {
                        vv.push_back(a[i][j]);
                    }
                }
            }
            sort(vv.begin(), vv.end());
            vv.erase(unique(vv.begin(), vv.end()),vv.end());
            if (vv != v)
            {
                int xx = vv.size();
                ans = max(ans, xx);
            }
        }
        cout<<ans<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<a[i].size();j++)
        //     {
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
    return 0;
}