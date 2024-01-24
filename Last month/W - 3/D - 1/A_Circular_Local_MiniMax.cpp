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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (n % 2 != 0)
    {
        cout << "NO" << '\n';
    }
    else
    {
        // cout << "YES" << '\n';
        vector<int> v;
        for (int i = 0, j = n / 2; i < n / 2; i++, j++)
        {
            v.push_back(a[i]);
            v.push_back(a[j]);
        }
        v.push_back(v[0]);
        v.push_back(v[1]);
        bool isit = true;
        for (int i = 1; i < v.size() - 1; i++)
        {
            if ((v[i - 1] < v[i]) &&( v[i] > v[i + 1]))
                continue;
            else if ((v[i - 1] > v[i]) && (v[i] < v[i + 1]))
                continue;

            else
            {
                isit = false;
                // cout<<" hi "<<endl;
                break;
            }
        }
        if (isit)
        {
            cout << "YES" << '\n';
            for (int i = 0; i < n; i++)
                cout << v[i] << " ";
            cout << '\n';
        }
        else
            cout << "NO" << '\n';
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