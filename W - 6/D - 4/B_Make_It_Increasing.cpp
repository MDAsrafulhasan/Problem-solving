#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cnt=0;
        for (ll i = n - 2; i >= 0; i--)
        {
            if (a[i] >= a[i + 1])
            {
                while (a[i] >= a[i + 1])
                {
                    a[i] = a[i] / 2;
                    cnt++;
                    if (a[i] == 0)
                    {
                        break;
                    }
                }
            }
        }
        bool isit=true;
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]>=a[i+1])
            {
                isit=false;
            }
        }
        if(isit) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}