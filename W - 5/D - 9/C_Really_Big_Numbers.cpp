#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sum_of(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main()
{
    ll n, x;
    cin >> n >> x;

    ll l = 0, r = n;
    ll ans=0;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if ((mid - sum_of(mid)) >= x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if(ans==0) cout<<ans<<endl;
    else cout<<(n-ans)+1<<endl;

    return 0;
}