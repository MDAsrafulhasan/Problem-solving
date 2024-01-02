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
        map<ll,ll> mp;
        ll a[n];
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            cnt=max(cnt,mp[a[i]]);
        }
        ll x= n-cnt;
        if(x>=cnt)
        {
            if(n%2==0) cout<<0<<endl;
            else cout<<1<<endl;
        }
        else
        {
            cout<<cnt-x<<endl;
        }

    }
    return 0;
}