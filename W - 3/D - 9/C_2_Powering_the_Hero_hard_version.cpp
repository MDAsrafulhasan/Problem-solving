#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // q.push(a[i]);
        }

        priority_queue<ll> q;

        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                if (!q.empty())
                {
                    cnt += q.top();
                    q.pop();
                }
            }
            else
            {
                q.push(a[i]);
            }
        }
        cout<<cnt<<endl;

        // while(!q.empty())
        // {
        //     cout<<q.top()<<endl;
        //     q.pop();
        // }
    }
    return 0;
}