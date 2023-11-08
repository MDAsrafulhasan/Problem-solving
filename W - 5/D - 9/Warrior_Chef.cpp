#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h;
        cin >> n >> h;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0;
        int r = INT_MAX;
        ll sum;
        int x;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            sum = h;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > mid)
                {
                    sum = sum - a[i];
                }
            }
            if (sum > 0)
            {
                x = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << x << endl;
    }
    return 0;
}