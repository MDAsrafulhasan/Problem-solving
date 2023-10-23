#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int cnt = 0;
        int k = 0;
        map<char, int> mp;
        int i = 0;
        while (i < s.size())
        {
            mp[s[i]]++;
            i++;
        }

        i = 0;

        while (i < s.size())
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (mp[s[i]] > 0)
                {

                    if (mp[toupper(s[i])] > 0)
                    {
                        mp[s[i]]--;
                        mp[toupper(s[i])]--;
                        cnt++;
                        // cout << "1st " << i << endl;
                    }
                    else
                    {
                        if (k < m)
                        {
                            if (mp[s[i]] > 1)
                            {
                                mp[s[i]]--;
                                mp[s[i]]--;
                                cnt++;
                                k++;
                                // cout << "2nd " << i << endl;
                            }
                        }
                    }
                }
            }

            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                if (mp[s[i]] > 0)
                {

                    if (mp[tolower(s[i])] > 0)
                    {
                        mp[s[i]]--;
                        mp[tolower(s[i])]--;
                        cnt++;
                        // cout << "3rd " << i << endl;
                    }
                    else
                    {
                        if (k < m)
                        {
                            if (mp[s[i]] > 1)
                            {
                                mp[s[i]]--;
                                mp[s[i]]--;
                                cnt++;
                                k++;
                                // cout << "4rth " << i << endl;
                            }
                        }
                    }
                }
            }
            i++;
        }
        cout << cnt << endl;
    }

    return 0;
}