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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[0]!=1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll sum=1;
        bool isit=true;
        for(int i=1;i<n;i++)
        {
            if(a[i]<=sum)
            {
                sum+=a[i];
            }
            else 
            {
                isit=false;
                break;
            }
        }
        if(isit) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}