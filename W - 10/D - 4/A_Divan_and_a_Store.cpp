#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, k;
        cin >> n >> l >> r >> k;
        int a[n];
        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= l && a[i] <= r)
            {
                q.push(a[i]);
            }
        }

        int sum = 0, cnt = 0;
        while (!q.empty())
        {
            sum += q.top();
            q.pop();
            if (sum <= k)
            {
                cnt++;
            }
            else
                break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}