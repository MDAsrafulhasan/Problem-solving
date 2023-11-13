#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c1 = 0, c0 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                c1++;
            }
            else if (s[i] == '0')
            {
                c0++;
            }
        }
        if (c0 == 0 && c1 == 0)
        {
            cout << s.size() << endl;
        }
        else if (c1 == 0 && c0 != 0)
        {
            int ans = 0;
            for (int i = 0; i < s.size(); i++)
            {
                ans++;
                if (s[i] == '0')
                {
                    break;
                }
            }
            cout << ans << endl;
        }

        else if (c1 != 0 && c0 == 0)
        {
            int ans = 0;
            for (int i = s.size()-1; i >= 0; i--)
            {
                ans++;
                if (s[i] == '1')
                {
                    break;
                }
            }
            cout << ans << endl;
        }

        else
        {
            int si, sj;
            // int l = 0, r = s.size();
            for (int i = s.size()-1; i >= 0; i--)
            {
                if (s[i] == '0')
                {
                    sj = i;
                }
            }

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '1')
                {
                    si = i;
                }
            }
            cout << (sj - si) + 1 << endl;
        }
    }
    return 0;
}