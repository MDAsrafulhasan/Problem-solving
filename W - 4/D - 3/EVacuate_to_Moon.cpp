// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m, h;
//         cin >> n >> m >> h;
//         ll car[n];
//         priority_queue<ll> q1, q2;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> car[i];
//             q1.push(car[i]);
//         }
//         ll outlet[m];
//         for (int i = 0; i < m; i++)
//         {
//             cin >> outlet[i];
//             q2.push(outlet[i]);
//         }
//         if (n <= m)
//         {
//             ll x = q1.top();
//             ll ans = 0;
//             ll sum = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 if (q1.top() > q2.top())
//                 {
//                     ans += q2.top();
//                     sum += q1.top();
//                     q2.pop();
//                     q1.top();
//                 }
//                 else
//                 {
//                     ans += q1.top();
//                     sum += q1.top();
//                     q1.pop();
//                     q2.pop();
//                 }
//             }
//             cout << min(1ll * ans * h, 1ll * sum) << endl;
//         }
//         else
//         {
//             ll sum = 0;
//             ll x = q1.top();
//             ll ans = 0;
//             for (int i = 0; i < m; i++)
//             {
//                 if (q1.top() > q2.top())
//                 {
//                     ans += q2.top();
//                     sum += q1.top();
//                     q2.pop();
//                     q1.pop();
//                 }
//                 else
//                 {
//                     ans += q1.top();
//                     sum += q1.top();
//                     q1.pop();
//                     q2.pop();
//                 }
//             }
//             cout << min(1ll * ans * h, 1ll * sum) << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        ll car[n];
        for (int i = 0; i < n; i++)
        {
            cin >> car[i];
        }

        ll outlet[m];
        for (int i = 0; i < m; i++)
        {
            cin >> outlet[i];
        }
        sort(car, car + n, greater<int>());
        sort(outlet, outlet + m, greater<int>());

        ll ans = 0;
        for (int i = 0; i < min(n, m); i++)
        {
            ans += min(1ll * outlet[i] * h, 1ll * car[i]);
        }
        cout << ans<<endl;
    }
    return 0;
}