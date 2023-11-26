#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0, cnt = 0;
    map<ll, ll> mp;
    mp[sum]++;
    for (ll i = 0; i < n; i++)
    {

        sum += a[i] % n;
        sum = (sum + n) % n;

        // if (sum > n)
        // {
        //     if (mp.find(sum - n) != mp.end())
        //     {
        //         if()
        //     }
        // }
        cnt += mp[sum];
        // if (mp.find(sum) == mp.end())
        // {
        mp[sum]++;
        // }
    }
    cout << cnt << endl;

    return 0;
}