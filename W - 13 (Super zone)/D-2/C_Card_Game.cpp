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
        ll totsum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
            {
                totsum+=a[i];
            }
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(a[i]>0)
                {
                    ans=max(ans,totsum);
                    totsum-=a[i];
                }
                else
                {
                    ans=max(ans,totsum+a[i]);
                }
            }

            else
            {
                if(a[i]>0)
                {
                    
                    totsum-=a[i];
                    ans=max(ans,totsum);
                }
                else
                {
                    ans=max(ans,totsum);
                }
            }
            
        }
        cout<<ans<<endl;
        

    }
    return 0;
}