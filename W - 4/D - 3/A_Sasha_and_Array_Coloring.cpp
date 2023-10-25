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
        int a[n];
        priority_queue<int> q1;
        priority_queue<int, vector<int>, greater<int>> q2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            q1.push(a[i]);
            q2.push(a[i]);
        }

        // while (!q1.empty() && !q2.empty())
        // {
        //     cout<<q1.top()<<" "<<q2.top()<<endl;
        //     q1.pop();
        //     q2.pop();
        // }
        // cout<<endl<<endl;

        if (n == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            int ans = 0;
            int c=n/2;
            while (c--)
            {
                ans += q1.top() - q2.top();
                q1.pop();
                q2.pop();
            }
            cout << ans << endl;
        }
    }
    return 0;
}