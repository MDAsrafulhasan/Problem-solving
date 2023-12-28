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
        bool t = false, th = false, f = false, se = false;
        vector<int> v;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a')
                v.push_back(i);
        }
        if (v.size() == 0 || v.size() == 1)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i + 1] - v[i] == 1)
            {
                t = true;
                break;
            }
            else if (v[i + 1] - v[i] == 2)
            {
                th = true;
                // break;
            }
            else if (v[i + 1] - v[i] == 3)
            {
                if (s[v[i] + 1] != s[v[i] + 2])
                {
                    f = true;
                }
                else
                {
                    if (i + 1 < v.size() - 1)
                    {
                        if (v[i + 2] - v[i + 1] == 3)
                        {
                            if (s[v[i + 1] + 1] == s[v[i + 1] + 2])
                            {
                                if (s[v[i + 1] + 1] != s[v[i] + 1])
                                {
                                    se = true;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (t)
            cout << 2 << endl;
        else if (th)
            cout << 3 << endl;
        else if (f)
            cout << 4 << endl;
        else if (se)
            cout << 7 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}