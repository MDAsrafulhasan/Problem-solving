#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        ll n, s, r;
        cin >> n >> s >> r;
        vector<ll> v;
        v.push_back(s - r);
        // cout << v[0] << endl;
        if (n == 2)
        {
            v.push_back(r);
        }
        else
        {
            ll sum = 0;
            ll x = r / (n-1);
            for (int i = 1; i < n; i++)
            {
                v.push_back(x);
            }
            x = r % (n-1);
            // cout<<endl;
            for (int i = 0, k = 1; i < x; i++, k++)
            {
                v[k] += 1;
                // cout<<v[k]<<endl;
            }
            // cout << endl << x << endl << endl;
            // for (int i = 1; i <= n - 1; i++)
            // {

            //     // if (i == n - 1)
            //     // {

            //     //     else
            //     //         v.push_back(r - sum);
            //     //     // cout << (r - sum)<<" r-sum" << endl;
            //     //     // cout << v[2] << endl;
            //     // }
            //     // else
            //     // {

            //     //     v.push_back(x);
            //     //     // cout << v[1] << " f" << endl;
            //     // }
            //     sum += x;
            // }
        }

        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}