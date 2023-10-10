#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<a[i]<<endl;
        // }
        int ans = 0;
        int sum = 0;
        int mn = INT_MAX;
        // int i = 0, j = 0;
        // sum+= abs(a[i][j]-a[i+1][j]);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    if (a[i][k] != a[j][k]) // string i er k value == string j er k value
                    {
                        sum += abs(a[i][k] - a[j][k]);
                    }
                }
                ans = min(mn, sum);
                mn = ans;
                sum = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}