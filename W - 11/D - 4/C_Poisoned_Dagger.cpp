#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,h;
        cin>>n>>h;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=h;
        ll l=1,r=h;
        while(l<=r)
        {
            ll mid = (l+r)/2;
            ll x=0;
            for(ll i=0;i<n;i++)
            {
                if(i==n-1) x+=mid;
                else
                {
                    ll y=a[i+1]-a[i];
                    if(y>=mid) x+=mid;
                    else x+=y;
                }
            }
            if(x>=h)
            {
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<endl;

    }
    return 0;
}