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
    ll sum = 0, cnt = 0;
    map<ll, ll> mp;
    mp[sum]++;
    for (ll i = 0; i < n; i++)
    {
        sum+=a[i];
        // cout<<"ager cnt= "<<cnt<<endl;
        cnt = cnt + mp[sum-s];
        mp[sum]++;
        // cout<<cnt<<" "<<sum<<" "<<sum-s<<endl;

        // sum += a[i];
        // if (sum == s)
        // {
        //     cnt++;
        // }
        // if (sum > s)
        // {
        //     if (mp.find(sum - s) != mp.end())
        //     {
        //         cnt++;
        //     }
        // }
        // if (mp.find(sum) == mp.end())
        // {
        //     mp[sum];
        // }
    }
    cout << cnt << endl;

    return 0;
}