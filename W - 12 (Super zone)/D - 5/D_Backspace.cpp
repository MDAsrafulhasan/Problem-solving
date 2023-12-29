#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, ss;
        cin >> s >> ss;
        bool isit = true;
        int j = s.size() - 1;
        for (int i = ss.size() - 1; i >= 0; i--)
        {
            while (j >= 0 && s[j] != ss[i])
            {
                j -= 2;
            }
            if (j < 0)
            {
                isit = false;
                break;
            }
            j--;
        }

        // for (int i = s.size() - 1; i >= 0; i--)
        // {
        //     // cout<<s[i]<<" "<<ss[j]<<" ";
        //     if (ss[j] == s[i])
        //     {
        //         j--;
        //         // cout<<j<<" "<<i<<" ";
        //         if (j == -1)
        //         {
        //             isit = true;
        //             break;
        //         }
        //     }
        //     else
        //     {
        //         // if (i != 0)
        //         // {
        //             i--;
        //         // }
        //         j = ss.size()-1;
        //         // cout<<j;
        //     }
        //     // cout << endl;
        // }
        if (isit)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}