#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string ss;
    cin >> ss;
    ll b, s, c, x, y, z, k;
    cin >> b >> s >> c;
    cin >> x >> y >> z;
    cin >> k;
    ll B = 0, C = 0, S = 0;
    // cout<<k<<endl;
    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i] == 'B')
            B++;
        else if (ss[i] == 'C')
            C++;
        else if (ss[i] == 'S')
            S++;
    }
    // cout<<k/2<<endl;
    // cout<<B<<" "<<C<<" "<<S<<endl;
    // ll cnt = 0;
    ll l = 0, r = 1e15;
    ll ans;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll aa = max(0ll,( mid * B - b));
        ll bb = max(0ll, (mid * S - s));
        ll cc = max(0ll, (mid * C - c));
        ll cost = (aa * x) + (bb * y) + (cc * z);
        // cout<<cost<<" "<<mid<<endl;
        if (cost <= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    // while (true)
    // {
    //     b -= B;
    //     s -= S;
    //     c -= C;
    //     if (b < 0)
    //     {
    //         if (k > 0)
    //         {
    //             k -= (B * x);
    //             if (k < 0)
    //             {
    //                 break;
    //             }
    //         }
    //     }
    //     if (s < 0)
    //     {
    //         if (k > 0)
    //         {
    //             k -= (S * y);
    //             if (k < 0)
    //             {
    //                 break;
    //             }
    //         }
    //     }
    //     if (c < 0)
    //     {
    //         if (k > 0)
    //         {
    //             k -= (C * z);
    //             if (k < 0)
    //             {
    //                 break;
    //             }
    //         }
    //     }
    //     if(k<0)
    //     {
    //         break;
    //     }
    //     cnt++;
    //     // cout<<cnt<<endl;
    // }
    // cout<<cnt<<endl;

    return 0;
}