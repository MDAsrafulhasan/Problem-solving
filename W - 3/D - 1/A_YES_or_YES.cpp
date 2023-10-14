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
        bool isit1 = false, isit2 = false, isit3 = false;
        // for (int i = 0; i < s.size(); i++)
        // {
        if (s[0] == 'y' || s[0] == 'Y')
            isit1 = true;
        if (s[1] == 'e' || s[1] == 'E')
            isit2 = true;
        if (s[2] == 's' || s[2] == 'S')
            isit3 = true;
        // }
        if (isit1 && isit2 && isit3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}