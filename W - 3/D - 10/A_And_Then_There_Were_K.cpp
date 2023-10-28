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
        ll cnt = 0;
        while (n != 1)
        {
            n >>= 1;
            cnt++;
        }
        ll ans = 1;
        ans<<=cnt;
        cout << ans-1 << endl;
    }
    return 0;
}