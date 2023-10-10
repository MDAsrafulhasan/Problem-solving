#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void isit(string s)
{
    bool is_ok = true;
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            is_ok = false;
            break;
        }
        i++;
        j--;
    }
    if (is_ok)
        cnt++;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int m;
        cin >> m;
        string s1 = s;
        // cout << s1.size();

        while (true)
        {
            isit(s);
            int hour = ((s[0] - '0') * 10) + (s[1] - '0');
            int munite = ((s[3] - '0') * 10) + (s[4] - '0');

            if (m % 60 == 0) // hour er khela
            {
                int time = m / 60;
                hour = time + hour;
                if (hour > 23)
                {
                    hour = hour - 24;
                }
            }
            else if (m < 60) // munite er khela
            {
                munite = munite + m;

                if (munite > 59)
                {
                    hour++;
                    if (hour > 23)
                    {
                        hour = hour - 24;
                    }
                    munite = munite - 60;
                }
            }
            else
            {
                int m_hour = m / 60;
                int m_munite = m % 60;
                hour = m_hour + hour;
                if (hour > 23)
                {
                    hour = hour - 24;
                }
                munite = m_munite + munite;
                if (munite > 59)
                {
                    hour++;
                    if (hour > 23)
                    {
                        hour = hour - 24;
                    }
                    munite = munite - 60;
                }
            }

            // cout << hour << " " << munite;

            if (hour > 9)
            {
                if (munite < 10)
                {
                    s = {to_string(hour) + ":" + "0" + to_string(munite)};
                }
                else
                {
                    s = {to_string(hour) + ":" + to_string(munite)};
                }
            }
            else
            {
                if (munite < 10)
                {
                    s = {"0" + to_string(hour) + ":" + "0" + to_string(munite)};
                }
                else
                {
                    s = {"0" + to_string(hour) + ":" + to_string(munite)};
                }
            }

            // cout << endl
            //      << s;

            if (s == s1)
            {
                break;
            }
        }
        cout << cnt << endl;
        cnt=0;
    }

    return 0;
}