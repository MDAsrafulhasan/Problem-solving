#include <bits/stdc++.h>
using namespace std;
bool camp(int x, int y)
{
    if (x <= y)
        return true;
    else
        return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    // int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x, camp);
        cout << it - v.begin() << " ";
    }

    return 0;
}