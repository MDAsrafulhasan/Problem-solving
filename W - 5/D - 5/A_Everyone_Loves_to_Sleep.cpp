#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, m;
        cin >> n >> h >> m;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int h1, m1;
            int hh = h;
            int mm = m;
            int cnt = 0;
            cin >> h1 >> m1;
            while (true)
            {
                if (hh == h1 && mm == m1)
                {
                    break;
                }
                cnt++;
                mm++;
                if (mm == 60)
                {
                    hh++;
                    mm = 0;
                    if (hh == 24)
                    {
                        hh = 0;
                    }
                }
            }
            ans = min(ans, cnt);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, h, m;
//         cin >> n >> h >> m;                         // another way, but hoy nai
//         int mn_h = 24;
//         int mn_m = 59;
//         vector<pair<int, int>> v;
//         int ans_h = 0;
//         int ans_m = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int h1, m1;
//             cin >> h1 >> m1;
//             if (h == h1 && m == m1)
//                 v.push_back({0, 0});
//             else
//             {
//                 if (h > h1)
//                 {
//                     ans_h = (24 - h) + h1;
//                     if (m > m1)
//                     {
//                         ans_m = (60 - m) + m1;
//                         ans_h--;
//                     }
//                     else
//                     {
//                         ans_m = m1 - m;
//                     }
//                     v.push_back({ans_h, ans_m});
//                 }

//                 else if (h < h1)
//                 {
//                     ans_h = h1 - h;
//                     if (m1 < m)
//                     {
//                         ans_m = (60 - m) + m1;
//                         ans_h--;
//                     }
//                     else
//                     {
//                         ans_m = m1 - m;
//                     }
//                     v.push_back({ans_h, ans_m});
//                 }
//                 else
//                 {
//                     ans_h = h - h1;
//                     if (m > m1)
//                     {
//                         ans_m = (60 - m) + m1;
//                     }
//                     else
//                     {
//                         ans_m = m1 - m;
//                     }
//                     v.push_back({ans_h, ans_m});
//                 }
//             }
//         }
//         int hour = INT_MAX;
//         int munite = INT_MAX;
//         for (int i = 0; i < v.size(); i++)
//         {
//             if (hour > v[i].first)
//             {
//                 hour = v[i].first;
//                 // if (munite > v[i].second)
//                     munite = v[i].second;
//             }
//             if (hour == v[i].first)
//             {
//                 hour = v[i].first;
//                 if (munite > v[i].second)
//                     munite = v[i].second;
//             }
//             // cout << v[i].first << " " << v[i].second << endl;
//         }
//         cout<<hour<<" "<<munite<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, h, m;
//         cin >> n >> h >> m;
//         int mn_h = 24;
//         int mn_m = 59;
//         for (int i = 0; i < n; i++)
//         {
//             int h1, m1;
//             cin >> h1 >> m1;
//             if (h1 == h)
//             {
//                 mn_h = h1;
//                 // mn_m = max(m, m1);
//                 if ((mn_m > m1) && m<=m1)
//                 {
//                     mn_m =m1;
//                 }
//                 // cout << mn_h << " " << mn_m << endl;           // another way, but hoy nai
//             }
//             else if (mn_h > h1)
//             {
//                 mn_h = h1;
//                 mn_m = m1;
//                 // cout << mn_h << " " << mn_m << endl;
//             }
//             else if (mn_h == h1)
//             {
//                 if (mn_m >= m1)
//                 {
//                     mn_m = min(mn_m, m1);
//                     // cout << mn_h << " " << mn_m << endl;
//                 }
//             }
//         }

//         int ans_h = 0;
//         int ans_m = 0;
//         if (h == mn_h && m == mn_m)
//             cout << 0 << " " << 0 << endl;
//         else
//         {
//             if (h > mn_h)
//             {
//                 ans_h = (24 - h) + mn_h;
//                 if (m > mn_m)
//                 {
//                     ans_m = (60 - m) + mn_m;
//                     ans_h--;
//                 }
//                 else
//                 {
//                     ans_m = mn_m - m;
//                 }
//             }

//             else if (h < mn_h)
//             {
//                 ans_h = mn_h - h;
//                 if (m > mn_m)
//                 {
//                     ans_m = (60 - m) + mn_m;
//                     ans_h--;
//                 }
//                 else
//                 {
//                     ans_m = mn_m - m;
//                 }
//             }
//             else
//             {
//                 ans_h = mn_h - h;
//                 if (m > mn_m)
//                 {
//                     ans_m = (60 - m) + mn_m;
//                     ans_h--;
//                 }
//                 else
//                 {
//                     ans_m = mn_m - m;
//                 }
//             }
//             cout << ans_h << " " << ans_m << endl;
//         }
//     }
//     return 0;
// }