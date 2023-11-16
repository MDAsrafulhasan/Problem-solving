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
        char al = 'w';
        char bb = 'l';
        int x = 0, y = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                if (al == 'w')
                {
                    al = 'l';
                    bb = 'w';
                }
                else
                {
                    y++;
                }
            }
            if (s[i] == 'A')
            {
                if (al == 'w')
                {
                    x++;
                }
                else
                {
                    al = 'w';
                    bb = 'l';
                }
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}