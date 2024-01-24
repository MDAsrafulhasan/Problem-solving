#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum < s)
    {
        cout << -1 << '\n';
        // continue;
    }
    else if (sum == s)
    {
        cout << 0 << '\n';
        // continue;
    }
    else
    {
        int sum1 = 0, cnt = 0, k;
        for (int i = 0; i < n; i++)
        {
            sum1 += a[i];
            cnt++;
            if (sum1 == s)
            {
                k = i + 1;
                break;
            }
        }
        int mx = cnt;
        int in = 0;
        for (int i = k; i < n; i++)
        {
            int j = i;
            while (j < n)
            {
                if (a[j] == 1)
                {
                    break;
                }
                cnt++;
                mx = max(cnt, mx);
                j++;
            }
            i = j;
            while (in < n)
            {
                if (a[in] == 1)
                {
                    in++;
                    break;
                }
                cnt--;
                mx = max(cnt, mx);
                in++;
            }
        }
        cout << n - mx << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}