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
        bool isit1 = false,isit2=false,isit3=false,isit4=false,isit5=false;
        if (n == 5)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'T')
                {
                    isit1 = true;
                }
                else if (s[i] == 'i')
                {
                    isit2 = true;
                }
                else if (s[i] == 'm')
                {
                    isit3 = true;
                }
                else if (s[i] == 'u')
                {
                    isit4 = true;
                }
                else if (s[i] == 'r')
                {
                    isit5 = true;
                }
            }
            if (isit1 && isit2 && isit3 && isit4 && isit5)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}