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
        ll m=n;
        ll cnt=0;
        ll ans=1;
        while(m!=0)
        {
            m=m/10;
            cnt++;
            // if(cnt==1)
            // {
            //     ans=ans*1;
            // }
            if(cnt>1)
            {
                ans*=10;
            }
        }
        cout<<n-ans<<endl;
    }
    return 0;
}