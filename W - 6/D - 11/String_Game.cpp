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
        int cnt_0 = 0, cnt_1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                cnt_0++;
            }
            else
                cnt_1++;
        }
            // if (cnt_0 == cnt_1 && min(cnt_0, cnt_1) % 2 == 0)
            //     cout << "Romas" << endl;
            // else if (cnt_0 == cnt_1 && min(cnt_0, cnt_1) % 2 != 0)
            //     cout << "Zlatan" << endl;
            if (min(cnt_0, cnt_1) % 2 == 0)
                cout << "Ramos" << endl;
            // else if (min(cnt_0, cnt_1) % 2 != 0)
            //     cout << "Zlatan" << endl;
            else
                cout << "Zlatan" << endl;
    }
    return 0;
}