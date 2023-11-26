#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool varify(vector<ll> x, ll n)
{
    for (ll i = 1; i < n - 1; i++)
    {
        if (x[i - 1] < x[i] && x[i] > x[i + 1])
            continue;
        if (x[i - 1] > x[i] && x[i] < x[i + 1])
            continue;
        // else
        // {
        return false;
        // }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> b(n), c(n);
        ll j = 0;
        for (ll i = 0; i < n; i++)
        {
            if (j >= n)
            {
                j = 1;
            }
            b[j] = a[i];
            j += 2;
        }
        j = 1;
        for (ll i = 0; i < n; i++)
        {
            if (j >= n)
            {
                j = 0;
            }
            c[j] = a[i];
            j+=2;
        }
        // vector<int> v={-1};
        vector<ll> v = {-1};
        if (varify(b, n))
        {
            v = b;
        }
        else if (varify(c, n))
        {
            v = c;
        }
        for (auto val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}