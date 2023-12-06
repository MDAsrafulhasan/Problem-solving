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
        // string x="1";
        char x = '1', y = '0';
        int cnt1 = 1, cnt0_1 = 0;
        // int mx = INT_MIN;
        // int a = s[0]-48;
        // cout<<a<<endl;
        for (int i = 1; i < n; i++)
        {
            if (x != s[i - 1])
            {
                x = '1';
                cnt1++;
            }
            else
                x = '0';
        }

        for (int i = 1; i < n; i++)
        {
            if (y != s[i - 1])
            {
                y = '1';
                cnt0_1++;
            }
            else
                y = '0';
        }
        cout << max(cnt1, cnt0_1) << endl;
    }
    return 0;
}