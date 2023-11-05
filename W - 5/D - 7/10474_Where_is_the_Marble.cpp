#include <bits/stdc++.h>
using namespace std;
int n, q;
int cnt = 0;
int main()
{
    while (cin >> n >> q)
    {
        if (!n && !q)
            break;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << "CASE# " << ++cnt << ":" << endl;
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            int l = 0, r = n - 1;
            int ans = -1;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (x == v[mid])
                {
                    ans = mid + 1;
                    r = mid - 1;
                }
                else if (x < v[mid])
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (ans != -1)
            {
                cout << x << " found at " << ans << endl;
            }
            else
            {
                cout << x << " not found" << endl;
            }
        }
    }
    return 0;
}