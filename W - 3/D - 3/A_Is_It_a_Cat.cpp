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
        bool isit = true;
        int cnt=0;
        bool m1 = false, m2 = false, m3 = false, m4 = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'm' || s[i] == 'M')
            {
                m1 = true;
                if (m2 || m3 || m4)
                {
                    isit = false;
                }
            }
            else if (s[i] == 'e' || s[i] == 'E')
            {
                m2 = true;
                if (m3 || m4)
                {
                    isit = false;
                }
            }
            else if (s[i] == 'o' || s[i] == 'O')
            {
                m3 = true;
                if (m4)
                {
                    isit = false;
                }
            }
            else if (s[i] == 'W' || s[i] == 'w')
            {
                m4 = true;
                if (!m1 || !m2 || !m3)
                {
                    isit = false;
                }
            }
            else
            {
                cnt++;
            }
        }
        if (m1 && m2 && m3 && m4 && isit && cnt==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

