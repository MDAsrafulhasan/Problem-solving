#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, h;
        cin >> n >> h;
        ll a[n];
        // int mx1 = INT_MIN;
        // int mx2 = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            // mx1 = max(mx1, a[i]);
        }

        sort(a, a + n);
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == mx1)
        //         continue;
        //     mx2 = max(mx2, a[i]);
        // }
        // ll ans=0,cnt=0;
        ll sum = a[n - 1] + a[n - 2];
        if (a[n - 1] >= h)
            cout << 1 << endl;
        else if (sum >= h)
            cout << 2 << endl;
        else
        {
            if (h % sum == 0)
                cout << (h / sum) * 2 << endl;
            else
            {
                // ll x = a[n-1]+a[n-2];
                ll x = (h / sum) * 2;
                if ((h % sum) <= a[n - 1])
                    // cout << x + 1 << endl;
                    x++;
                else
                {
                    // cout << x + 2 << endl;
                    x+=2;
                }
                cout<<x<<endl;
            }
        }
        // while(ans<h)
        // {
        //     ans+=mx1;
        //    cnt++;
        //     if(ans>=h)
        //     {
        //         break;
        //     }
        //     ans+=mx2;
        //     cnt++;
        // }
        // cout<<cnt<<endl;
    }
    return 0;
}