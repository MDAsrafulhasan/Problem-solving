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
        map<char, int> mp;
        int cnt = 0;
        int days = 0;
        int si, sj;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            if (mp[s[i]] == 1)
            {
                cnt++;
                if (cnt == 1)
                {
                    si = i;
                }
            }
            if (cnt > 3)
            {
                days++;
                cnt = 0;
                sj = i;
                for (int j = si; j <= sj; j++)
                {
                    // cout<<s[j];
                    mp[s[j]]--;
                }
                i--;
                // cout<<endl;
            }
        }
        if (cnt > 0)
            days++;
        cout << days << endl;
    }
    return 0;
}