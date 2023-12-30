#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
const int N=1e5+5;
const int M=2e9+5;
ll a[N],b[N];
bool isit(ll mid)
{
    ll x=k;
    for(ll i=0;i<n;i++)
    {
        ll xx = a[i]*mid - b[i];
        if(xx>0)
        {
            x = x-xx;
        }
        if(x<0)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    // int n, k;
    cin >> n >> k;
    // int a[n], aa[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        // aa[i] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll cnt = 0;
    ll l = 0, r = M;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (isit(mid))
        {
            // r=mid-1;
            cnt = mid;
            l = mid + 1;

        }
        else
        {
            // l=mid+1 ;
            r = mid - 1;
        }
    }
    cout<<cnt<<endl;

    return 0;
}