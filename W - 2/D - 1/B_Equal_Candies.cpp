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
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
        }
        int i = 0, sum = 0;
        while (i < n)
        {
            sum += abs(mn - a[i]);
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}