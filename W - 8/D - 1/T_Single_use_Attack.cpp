#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a -= c;
        int cnt = 1;
        while (true)
        {
            if (a <= 0)
            {
                break;
            }
            a -= b;
            cnt++;
                }
        cout << cnt << endl;
    }
    return 0;
}