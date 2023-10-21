#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        // sort(a, a + n);

        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({a[i], i});
        }

        sort(v.begin(),v.end());

        // for(int i=0;i<n;i++)
        // {
        //     cout<<v[i].first<<"    "<<v[i].second<<endl;
        // }
        // cout<<endl;

        sort(b, b + n);

        // for(int i=0;i<n;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;


        // for(int i=0;i<n;i++)
        // {
        //     cout<<b[i]<<" ";
        // }
        // cout<<endl<<endl;


        int c[n];
        for (int i = 0; i < n; i++)
        {
            c[v[i].second] = b[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;

    }
    return 0;
}