#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int fr[26 + 1] = {0};
    // cout<<s[s.size()-2]-64<<endl;
    for (int i = 0; i < s.size(); i++)
    {
        fr[s[i] - 64]++;
    }
    int cnt = 0;
    int si;
    for (int i = 1; i <= 26; i++)
    {
        if (fr[i] % 2 != 0)
        {
            cnt++;
            fr[i]--;
            si = i;
        }
    }
    // for (int i = 1; i <= 26; i++)
    // {
    //     cout << fr[i] << endl;
    // }
    if (s.size() % 2 == 0)
    {
        if (cnt > 0)
            cout << "NO SOLUTION" << endl;
        else
        {
            // string s1 ;
            vector<char> s1(s.size());
            int l = 0, r = s.size() - 1;
            for (int i = 1; i <= 26; i++)
            {
                if (fr[i] > 0)
                {
                    while (fr[i] != 0)
                    {

                        s1[l] = i + 64;
                        s1[r] = i + 64;
                        l++;
                        r--;
                        fr[i] -= 2;
                    }
                }
            }
            // cout << s1 << " hi" << endl;
            for (int i = 0; i < s1.size(); i++)
            {
                cout << s1[i];
            }
        }
    }
    else
    {
        if (cnt != 1)
            cout << "NO SOLUTION" << endl;
        else
        {
            vector<char> s1(s.size());
            int l = 0, r = s.size() - 1;
            for (int i = 1; i <= 26; i++)
            {
                if (fr[i] > 0)
                {
                    while (fr[i] != 0)
                    {

                        s1[l] = i + 64;
                        s1[r] = i + 64;
                        l++;
                        r--;
                        fr[i] -= 2;
                    }
                }
            }
            s1[(s.size())/2]=si+64;
            // cout << s1 << " hi" << endl;
            for (int i = 0; i < s1.size(); i++)
            {
                cout << s1[i];
            }
        }
    }

    return 0;
}