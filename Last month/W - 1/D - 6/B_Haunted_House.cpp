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
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        ll z = 0;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                z++;
                v.push_back(i - v.size());
            }
        }
        vector<ll> vv(n, 0);
        // vv[0] = v[0];
        for (int i = 0; i < v.size(); i++)
        {
            if (i == 0)
            {
                vv[i] = v[i];
            }
            else
            {
                vv[i] = v[i] + vv[i - 1];
            }
        }
        ll i = 0;
        for (i = 0; i < z; i++)
            {cout << vv[i] << " ";}

        while (i < n)
        {
            cout << -1 << " ";
            i++;
        }
        cout<<endl;
    }
    return 0;
}