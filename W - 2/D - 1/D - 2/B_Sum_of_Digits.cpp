#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    int cnt = 0;
    if (s.size() < 2)
        cout << cnt;
    else
    {
        while (true)
        {
            sum = 0;
            for (int i = 0; i < s.size(); i++)
            {
                sum += (s[i] - '0');
            }
            cnt++;
            s = to_string(sum);
            if (s.size() == 1)
            {
                break;
            }
        }

        cout << cnt;
    }
    return 0;
}