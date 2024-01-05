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
    ll ans = 0, cnt = 0;
    ll i = 0, j = 0, sum = 0;
    while (j < n)
    {
        sum += a[j];
        // cnt++;

        while (sum >= s)
        {
            sum -= a[i];
            // cnt--;
            i++;
        }

        ans += i;

        j++;
        // cout<<j<<" "<<i<<" : " <<ans<<endl;
    }
    cout << ans << endl;

    return 0;
}