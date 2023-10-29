#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool isit = false;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] & x) == x)
            {
                v.push_back(a[i]);
            }
        }
        int ans = -1;
        for (int val : v)
        {
            // cout << val << " ";
            ans = (ans & val);
        }
        // cout << endl
        //      << (7 & 7) << endl;
        if (ans == x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}