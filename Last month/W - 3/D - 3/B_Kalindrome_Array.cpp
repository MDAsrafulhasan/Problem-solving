#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool isit1(vector<int> &v)
{
    bool ans = true;
    int i = 0, j = v.size() - 1;
    while (i < j)
    {
        if (v[i] != v[j])
        {
            ans = false;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i = 0, j = n - 1;
    bool isit = true;
    int x, y;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            x = a[i];
            y = a[j];
            isit = false;
            break;
        }
        i++;
        j--;
    }
    if (isit)
        cout << "YES" << endl;
    else
    {
        vector<int> v, vv;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
                continue;
            v.push_back(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == y)
                continue;
            vv.push_back(a[i]);
        }
        if (isit1(v) == true || isit1(vv) == true)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
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