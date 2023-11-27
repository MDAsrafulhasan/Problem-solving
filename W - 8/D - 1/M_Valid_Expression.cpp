#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (x >= (1 - n) && x <= (n + 1))
        {
            int a = 1, i = 0;
            string s = "";
            while (1)
            {
                if ((x - a) > 0)
                {
                    s += '+';
                    // n--;
                    a++;
                }
                else if ((x - a) < 0)
                {
                    s += '-';
                    // n--;
                    a--;
                }
                else
                {
                    s += '*';
                    // n--;
                    // a++;
                }
                i++;
                if (i == n)
                    break;
            }
            cout << s << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}