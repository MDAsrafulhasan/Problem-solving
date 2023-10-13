#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = 0, j = 0;
    // int uni=0;
    int fr[26] = {0};
    int mx = 0;
    int cnt = 0;
    while (j < s.size())
    {
        fr[s[j] - 'a']++;

        // if(fr[s[j]-'a']==1)
        // {
        // }

        if (fr[s[j] - 'a'] > 1)
        {
            mx = max(mx, j - i);
            while (s[i] != s[j])
            {
                fr[s[i] - 'a']--;
                i++;
            }
            fr[s[i] - 'a']--;
            i++;
            cnt++;
            // mx = max(mx, j - i);
            // while (s[i] != s[j])
            // {
            //     fr[s[i] - 'a']--;
            //     i++;
            //     if (s[i] == s[j])
            //     {
            //         fr[s[i]]--;
            //         i++;
            //     }
            // }
        }
        j++;
    }
    mx=max(mx,j-i);
    cout<<mx;
    return 0;
}