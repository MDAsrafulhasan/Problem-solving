#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a = n;
    // string s;

    while (true)
    {
        n++;
        // cout << n << " ";
        string s = to_string(n);
        // cout << s << " ";
        int digitcnt = 0;
        int fr[10] = {0};
        for (int j = 0; j < s.size(); j++)
        {
            fr[s[j] - '0']++;
            if (fr[s[j] - '0'] == 1)
            {
                digitcnt++;
            }
        }
        if (digitcnt == 4)
            break;
        // cout << digitcnt << endl;
        // digitcnt = 0;
        // fr[10] = {0};
    }

    cout << n;
    return 0;
}