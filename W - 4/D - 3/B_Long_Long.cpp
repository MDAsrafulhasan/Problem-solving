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
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=abs(a[i]-0);
        }
        // vector<int> v;
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            
            if(a[i]<0)
            {
                int j=i;
                while(a[i]<=0)
                {
                    i++;
                }
                cnt++;
            }
        }
        cout<<sum<<" "<<cnt<<endl;
        // cout<<sum<<endl;
        // while()
    }
    return 0;
}