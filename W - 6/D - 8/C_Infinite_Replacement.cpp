#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, ss;
        cin >> s >> ss;
        ll cnta = 0;
        for (int i = 0; i < ss.size(); i++)
        {
            if (ss[i] == 'a')
            {
                cnta++;
            }
        }
        if (ss.size() == 1 && cnta == 1)
        {
            cout << 1 << endl;
        }
        else if (ss.size() == 1 && cnta == 0)
        {
            cout << (1ll << s.size()) << endl;
        }
        else if (ss.size() >= 1 && cnta >= 1)
        {
            cout << -1 << endl;
        }
        else 
        {
            cout << (1ll << s.size()) << endl;
        }
    }
    return 0;
}