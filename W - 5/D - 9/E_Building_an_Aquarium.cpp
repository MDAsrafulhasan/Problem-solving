#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll l=0,r=INT_MAX;
        ll sum,ans;
        while(l<=r)
        {
            sum=0;
            ll mid=l+(r-l)/2;
            for(int i=0;i<n;i++)
            {
                if(mid>a[i])
                {
                    sum+=(mid-a[i]);
                }
            }
            if(sum<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}