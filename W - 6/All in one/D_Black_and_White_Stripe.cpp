#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        int mx = 0;
        int si, sj;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                cnt++;
            }
            else
            {
                mx = max(mx, cnt);
                if (mx == cnt)
                {
                    sj = i - 1;
                    si = i - cnt;
                }
                cnt = 0;
            }
            if (i == s.size() - 1)
            {
                mx = max(mx, cnt);
                if (mx == cnt)
                {
                    sj = i - 1;
                    si = i - cnt;
                }
            }
        }

        if (mx >= k)
            cout << 0 << endl;
        else
        {
            cnt = 0;
            int i = si - 1, j = sj + 1;
            cout << "mx = " << mx << ", " << i << " " << j << endl;
            while (true)
            {
                if (i >= 0)
                {
                    if (s[i] == 'W')
                    {
                        cnt++;
                        mx++;
                        if (mx == k)
                        {
                            break;
                        }
                    }
                    else
                    {
                        mx++;
                        if (mx == k)
                        {
                            break;
                        }
                        i--;
                    }
                }

                if (j < s.size())
                {
                    if (s[j] == 'W')
                    {
                        cnt++;
                        mx++;
                        if (mx == k)
                        {
                            break;
                        }
                        j++;
                    }
                    else
                    {
                        mx++;
                        if (mx == k)
                        {
                            break;
                        }
                        j++;
                    }
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}