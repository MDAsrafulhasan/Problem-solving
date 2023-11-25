#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a, b;
    cin >> a >> b;
    vector<ll> v;
    for (ll i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            v.push_back(i);
            if ((a / i) != i)
            {
                v.push_back(a / i);
            }
        }
    }
    sort(v.begin(), v.end());
    // cout << v.size()<<endl;
    // for(int val:v)
    // {
    //     cout<<val<<endl;
    // }
    if (v.size() >= b)
    {
        cout << v[b - 1] << endl;
    }
    else
        cout << -1 << endl;

    return 0;
}