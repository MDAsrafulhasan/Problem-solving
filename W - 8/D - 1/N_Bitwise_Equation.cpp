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
        if (n == 0)
            cout << 4 << " " << 6 << " " << 3 << " " << 7 << endl;
        else
        {
            ll d, c = 0;

            for (ll i = 3; i <= 100000; i++)
            {
                d = i ^ n;
                if (d == i || d <= 2)
                    continue;
                c = i;
                break;
            }
            if (c == 0)
                cout << -1 << endl;
            else
                cout << 1 << " " << 2 << " " << c << " " << d << endl;
        }
    }
    return 0;
}