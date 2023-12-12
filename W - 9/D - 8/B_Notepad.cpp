#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<pair<char, char>, int> mp;
        pair<char, char> pr = {s[0], s[1]};
        mp[pr]++;
        bool isit = false;
        for (int i = 2; i < n; i++)
        {
            pair<char, char> pp = {s[i - 1], s[i]};
            if (mp[pp] != 0)
            {
                if ((pp == pr && mp[pp] > 1) || (pp != pr))
                {
                    isit = true;
                    break;
                }
            }
            pr = pp;
            mp[pp]++;
        }
        if (isit)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}