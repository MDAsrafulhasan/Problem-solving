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
        vector<int> v;
        for (int i = 0; i < n - 1; i++)
        {
            v.push_back(abs(a[i] - a[i + 1]));
        }
        int ans = INT_MAX;
        if (n >= 2)
        {
            // zodi alice 1st ta ney
            ans = min(ans, v[0]);
        }

        if (n >= 2)
        {
             // zodi alice last ta ney
            ans = min(ans, v[n - 2]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            // zodi majhe theke ney
            int bob_beshi = max(v[i], v[i - 1]);
            ans = min(bob_beshi, ans);
        }
        cout << ans << endl;
    }

    return 0;
}