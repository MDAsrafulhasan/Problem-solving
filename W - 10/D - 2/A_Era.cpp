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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int v[n];
        for (int i = 0; i < n; i++)
        {
            v[i] = a[i] - (i+1);
        }
        sort(v, v + n, greater<int>());
        cout << v[0] << endl;
    }
    return 0;
}