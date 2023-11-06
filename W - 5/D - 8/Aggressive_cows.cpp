#include <bits/stdc++.h>
using namespace std;
bool isit(int dis, int a[], int n, int c)
{
    int current = 0;
    int cow = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[current] >= dis)
        {
            cow++;
            current = i;
        }
    }
    return cow >= c;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int l = 0;
        int r = INT_MAX;
        int ans;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (isit(mid, a, n, c))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}