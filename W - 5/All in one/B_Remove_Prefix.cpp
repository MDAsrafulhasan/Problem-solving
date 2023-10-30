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
        int a[n + 1];
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = n; i > 0; i--)
        {
            mp[a[i]]++;
            if (mp[a[i]] > 1)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}