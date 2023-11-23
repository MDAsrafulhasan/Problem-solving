#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = 0, sum = 0, cnt = 0;
    while (j < n)
    {
        sum += a[j];

        if (sum > k)
        {
            while (sum > k)
            {
                sum -= a[i];
                i++;
            }
        }
        if (sum == k)
        {
            cnt++;
            // cout << "1st " << cnt << endl;
        }
        j++;
    }
    while (i < n)
    {
        sum -= a[i];
        if (sum == k)
        {
            cnt++;
            // cout << "2nd " << cnt << endl;
        }
        i++;
    }
    cout << cnt << endl;
    return 0;
}