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
        int cnt = 0;
        string s1 = "314159265358979323846264338327";
        bool isit = true;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s[i] == s1[i])
            {
                cnt++;
            }
            else
            {
                isit = false;
                break;
            }
        }
        if (!isit)
            cout << cnt << endl;
        else
            cout << s.size() << endl;
    }
    return 0;
}