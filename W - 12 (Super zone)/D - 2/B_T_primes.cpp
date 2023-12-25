#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a[1000000] = {0};

    for (int i = 2; i <= 1000000; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 2; i * j <= 1000000; j++)
            {
                a[i * j] = 1;
            }
        }
    }

    ll n;
    cin >> n;
    // ll a[n];
    ll sq;
    ll x;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        sq = sqrt(x);
        if (x == 1)
            cout << "NO" << endl;
        else if ((sq * sq == x) && (a[sq] == 0))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
        // ll xx=x;
        // ll cnt=0;
        // for(ll i=1;i*i<=x;i++)
        // {
        //     if(xx%i==0)
        //     {
        //         cnt++;
        //         if(xx/i!=i)
        //         {
        //             cnt++;
        //         }
        //     }
        // }
        // if(cnt==3) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
    }

    return 0;
}