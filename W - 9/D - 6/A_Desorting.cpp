#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        bool isit=true;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        for (ll i = 1; i < n; i++)
        {
            if(a[i]<a[i-1])
            {
                isit=false;
                break;
            }
        }
        if(!isit) cout<<0<<endl;
        else
        {
            ll ans= LLONG_MAX;
            for(ll i=0;i<n-1;i++)
            {
                ans = min(ans, ((a[i+1]-a[i])/2)+1);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}