#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (k * 2 <= n)
        {
            ll x = ((n/2) + (n%2)) -k;
            if(x%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}