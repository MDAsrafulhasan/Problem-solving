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
        vector<ll> v;
        ll i = 0;
        v.push_back(n);
        while ((1 << i) < n)
        {
            if (n & (1 << i))
            {
                n ^= (1 << i);
                v.push_back(n);
            }
            i++;
        }
        while (n > 1)
        {
            n /= 2;
            v.push_back(n);
        }
        cout<<v.size()<<endl;
        for(auto val:v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}