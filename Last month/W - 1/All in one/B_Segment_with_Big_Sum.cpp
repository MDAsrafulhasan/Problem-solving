#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, s;
    cin >> n >> s;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort(a, a + n);
    ll mn = __LONG_MAX__, cnt = 0;
    ll i = 0, j = 0, sum = 0;
    while (j < n)
    {
        sum += a[j];
        // cnt++;
        
        while (sum -a[i] >= s)
        {
            sum -= a[i];
            // if (sum >= s)
            // {
            //     mn = min(mn, j - i + 1);
                // cout <<"vetorer " <<mn <<" ar i holo "<<i<<"ar j "<<j<< endl;
            // }
            // cnt--;
            i++;
            // cout <<"vetorer " <<mn <<" ar i holo "<<i<<"ar j "<<j<< endl;
        }

        if (sum >= s)
        {
            mn = min(mn, j - i+1);
            // cout <<"bayre " <<mn <<" ar i holo "<<i<<"ar j "<<j<< endl;
        }

        j++;
    }
    // j--;
    // if (sum >= s)
    //     {
    //         mn = min(mn, j - i);
    //         cout << mn << endl;
    //     }
    if(mn==__LONG_MAX__)
    {
        cout << -1 << endl;
    }
    else cout << mn << endl;
    return 0;
}