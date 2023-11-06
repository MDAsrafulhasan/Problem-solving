#include <bits/stdc++.h>
using namespace std;
bool isit(int capacity, int a[], int n, int k)
{
    int tangki = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>capacity)
        {
            tangki=INT_MAX;
            break;
        }
        sum += a[i];
        if (sum > capacity)
        {
            sum = 0 + a[i];
            tangki++;
        }
    }
    return tangki <= k;
}

int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0;
        int r = INT_MAX;
        int ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (isit(mid, a, n, k))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}