#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll l, r;
    cin >> l >> r;
    ll x = (((r - l) + 1) / 2);
    // cout << x << endl;
    if ((r - l) % 2 != 0)

    {
        cout << "YES" << endl;
        for (ll i = 0; i < x; i++)
        {
            cout << l << " " << l + 1 << endl;
            l += 2;
        }
    }
    else cout<<"NO"<<endl;
    // cout<<__gcd(2,7)<<endl;
    // cout<<__gcd(4,1)<<endl;
    // cout<<__gcd(3,8)<<endl;
    // cout<<__gcd(6,5)<<endl;
    return 0;
}