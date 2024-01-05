#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, s;
    cin >> n >> s;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll mx = 0, cnt = 0;
    ll i = 0, j = 0, sum = 0;
    while (j < n)
    {
        sum += a[j];
        // cnt++;
        if (sum <= s)
        {
            mx = max(mx, j - i + 1);
        }

        while (sum > s)
        {
            sum -= a[i];
            // cnt--;
            i++;
        }

        j++;
    }
    cout << mx << endl;
    return 0;
}