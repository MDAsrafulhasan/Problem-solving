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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<pair<int, int>> v, vv;

        for (int i = 0; i < n; i++)
        {
            // int x;
            // cin >> x;
            // a[i].first=x;
            // a[i].second=i;
            v.push_back({a[i], i});
        }
        sort(v.begin(), v.end());
        vector<int> x;
        for (auto val:v)
        {
            x.push_back(val.second);
        }

        for (int i = 0; i < n; i++)
        {
            vv.push_back({x[i], n - i});
        }
        sort(vv.begin(), vv.end());

        for (auto val : vv)
            cout << val.second << " ";
        cout << endl;
    }
    return 0;
}