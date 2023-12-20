#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll x = b / (a - 1);
        if ((b + x) % a != 0)
            cout << x + b << endl;
        else
            cout << (x + b) - 1 << endl;
    }
    return 0;
}