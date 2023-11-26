#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n],b[m];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
        }

        for(ll i=0;i<m;i++)
        {
            sort(a,a+n);
            a[0]=b[i];
        }
        ll sum = 0;
        for(ll i=0;i<n;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;

        // sort(b,b+m,greater<int>());
        // sort(a,a+n);
        // ll i=0,sum=0;
        // while(i<min(n,m))
        // {
        //     sum+=b[i];
        //     i++;
        // }
        // while(i<n)
        // {
        //     sum+=a[i];
        //     i++;
        // }
        // cout<<sum<<endl;


    }
    return 0;
}