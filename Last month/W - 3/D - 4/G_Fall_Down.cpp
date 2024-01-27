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
    int n, m;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int col = 0; col < m; col++)
    {
        int floor = n - 1;
        while (floor > -1 && s[floor][col] != '.')
        {
            if (s[floor][col] == 'o')
            {
                floor--;
                break;
            }
            floor--;
        }
        if (floor < 0)
            continue;
        int curr = floor;
        while (curr > -1)
        {
            if (s[curr][col] == '*')
            {
                swap(s[floor][col], s[curr][col]);
                floor--;
            }
            else if (s[curr][col] == 'o')
            {
                floor = curr - 1;
            }
            curr--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << '\n';
    }
    cout << '\n';
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