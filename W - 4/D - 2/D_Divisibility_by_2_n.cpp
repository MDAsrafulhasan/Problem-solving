// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)                                          //  ( hoy nai )  //
//     {
//         int n;
//         cin >> n;
//         int a[n + 1];
//         int mul = 1;
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];                                            
//             q.push({a[i], i});
//             mul *= a[i];
//         }

//         // while (!q.empty())
//         // {
//         //     cout << q.top().first << " " << q.top().second << endl;
//         //     q.pop();
//         // }

//         // for (int i = 1; i <= n; i++)
//         // {
//         //     q.push({a[i], i});
//         // }

//         // cout << endl;

//         // for (int i = 1; i <= n; i++)
//         // {
//         //     cout << a[i] << " ";
//         // }
//         // cout << endl
//         //      << endl;

//         int d = pow(2, n);
//         int cnt = 0, m;
//         if (mul % d == 0)
//         {
//             cout << "0" << endl;
//         }
//         else
//         {
//             // q.pop();
//             for (int j = 1; j <= n; j++)
//             {
//                 mul = 1;

//                 m = (q.top().first) * (q.top().second);

//                 a[q.top().second] = m;

//                 if (q.top().second == 1)
//                 {
//                     q.pop();
//                     continue;
//                 }
//                 else
//                 {
//                     q.pop();
//                 }

//                 for (int i = 1; i <= n; i++)
//                 {
//                     mul *= a[i];
//                 }

//                 cnt++;

//                 if (mul % d == 0)
//                 {
//                     break;
//                 }
//             }
//             if (mul % d == 0)
//             {
//                 cout << cnt << endl;
//             }
//             else
//             {
//                 cout<<"-1"<<endl;
//             }
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
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            // int j=i;
            while (a[i] % 2 == 0)
            {
                cnt++;
                a[i] /= 2;
            }
        }
        vector<ll> v;
        for (int i = 2; i <= n; i++)
        {
            ll j = i, k = 0;
            while (j % 2 == 0)
            {
                k++;
                j /= 2;
            }
            // if (i % 2 == 0)
            if (k > 0)
            {
                v.push_back(k);
            }
        }
        sort(v.begin(), v.end());
        // reverse(v.begin(), v.end());
        ll ans = 0;
        for (int i = v.size()-1; i >= 0 && cnt < n; i--)
        {
            cnt += v[i];
            ans++;
        }
        if (cnt < n)
        {
            cout << "-1" << endl;
        }
        else
            cout << ans << endl;
    } 
    return 0;
}
