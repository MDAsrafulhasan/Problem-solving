// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// void solve()
// {
//     int n, m, h;
//     cin >> n >> m >> h;
//     pair<int, ll> pi;
//     int ans = 1;
//     for (int i = 0; i < n; i++)
//     {
//         vector<int> a(m);
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[j];
//         }
//         sort(a.begin(), a.end());
//         int cnt = 0;
//         long long pen = 0, sum = 0;
//         for (int j = 0; j < m; j++)
//         {
//             if (sum + a[j] > h)
//                 break;
//             sum += a[j];
//             pen += sum;
//             cnt++;
//         }
//         if (i)
//         {
//             if (make_pair(-cnt, pen) < pi)
//                 ans++;
//         }
//         else
//             pi = {-cnt, pen};
//     }
//     cout << ans << '\n';
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        vector<pair<pair<ll, ll>, ll>> ans;

        for (int i = 0; i < n; i++)
        {
            vector<int> v(m);
            for (int j = 0; j < m; j++)
            {
                cin >> v[j];
            }
            sort(v.begin(), v.end());
            ll t = 0, in = 0, cnt = 0, sum = 0;
            for (int j = 0; j < m; j++)
            {

                if ((v[j] + t) <= h)
                {
                    t += v[j];
                    cnt++;
                    sum += t;
                }
                else
                    break;
            }
            ans.push_back({{cnt, -sum}, -(i + 1)});
        }

        sort(ans.begin(), ans.end(), greater<pair<pair<ll, ll>, ll>>());
        ll xx;
        for (int i = 0; i < n; i++)
        {
            if (ans[i].second == -(1))
            {
                xx = i + 1;

                break;
            }
        }
        cout << xx << '\n';
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios_base::sync_with_stdio(false);             // TLE khay
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m, h;
//         cin >> n >> m >> h;
//         // int a[n][m];
//         vector<ll> v[n];
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 ll x;
//                 cin >> x;
//                 v[i].push_back(x);
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             sort(v[i].begin(), v[i].end());
//         }

//         // for (int i = 0; i < n; i++)
//         // {
//         //     // sort(v[i].begin(),v[i].end());
//         //     for (int j = 0; j < m; j++)
//         //     {
//         //         cout<<v[i][j]<<" ";
//         //     }
//         //     cout<<endl;
//         // }

//         vector<pair<pair<ll, ll>, ll>> ans;
//         // pair<int, int> x;
//         for (int i = 0; i < n; i++)
//         {
//             ll t = 0, in = 0, cnt = 0, sum = 0;
//             for (auto val : v[i])
//             {
//                 // cout<<t<<" "<<val<<endl;
//                 if ((val + t) <= h)
//                 {
//                     t += val;
//                     cnt++;
//                     sum += t;
//                 }
//                 else
//                     break;
//             }
//             // ans[i].push_back(cnt*(-1));
//             // ans[i].push_back(t);
//             // ans[i].push_back(i);
//             ans.push_back({{cnt, sum * (-1)}, -(i + 1)});
//             // cout << endl
//             //      << endl;
//             // in=i+1;
//             // cout<<cnt<<" "<<t<<" "<<in<<endl;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             sort(ans.begin(), ans.end(), greater<pair<pair<ll, ll>, ll>>());
//         }
//         ll xx;
//         for (int i = 0; i < n; i++)
//         {
//             if (ans[i].second == -1)
//             {
//                 xx = i + 1;
//             }
//             // cout << endl;
//         }
//         cout << xx << '\n';
//     }
//     return 0;
// }