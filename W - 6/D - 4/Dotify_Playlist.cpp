#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        priority_queue<pair<int, int>> q;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            q.push({x, y});
        }
        int cnt = 0;
        int sum = 0;
        while (!q.empty())
        {

            if (q.top().second == b)
            {
                sum += q.top().first;
                cnt++;
            }
            if (cnt == a)
            {
                break;
            }
            q.pop();
        }
        if (cnt != a)
            cout << -1 << endl;
        else
            cout << sum << endl;
    }
    return 0;
}