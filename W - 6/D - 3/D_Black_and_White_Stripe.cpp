#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        int cnt1 = 0;
        int mx = 0;
        int j = 0, i = 0;
        priority_queue<int, vector<int>, greater<int>> q;
        while (j < s.size())
        {
            if (s[j] == 'W')
            {
                cnt1++;
            }
            if (j >= (k - 1))
            {
                q.push(cnt1);
                if(s[i]=='W')
                {
                    cnt1--;
                    i++;
                }
                else
                {
                    i++;
                }
            }
            j++;
        }
        cout<<q.top()<<endl;
        // while(!q.empty())
        // {
        //     cout<<q.top()<<endl;
        //     q.pop();
        // }
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
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         int cnt = 0;
//         int cnt1 = 0;
//         int mx = 0;
//         int si, sj;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == 'B')
//             {
//                 cnt++;
//             }
//             else
//             {
//                 mx = max(mx, cnt);
//                 if (mx == cnt)
//                 {
//                     sj = i-1 ;
//                     si = (i - cnt);
//                 }
//                 cnt = 0;
//             }
//             if (i == s.size() - 1)
//             {
//                 mx = max(mx, cnt);
//                 if (mx == cnt)
//                 {
//                     sj = i;
//                     si = (i-cnt)+1;
//                 }
//             }
//             if (s[i] == 'W')
//             {
//                 cnt1++;
//             }
//         }

//         if (mx >= k)
//             cout << 0 << endl;
//         else if (cnt1 == n)
//         {
//             cout << k << endl;
//         }
//         else
//         {
//             cout << "mx = " << mx << ", " << si << " " << sj << endl;
//             cnt = 0;
//             int i = si - 1, j = sj + 1;
//             cout << "mx = " << mx << ", " << i << " " << j << endl<<endl;
//             while (true)
//             {
//                 cout << "mx = " << mx << ", " << i << " " << j << endl;
//                 if (i >= 0)
//                 {
//                     if (s[i] == 'W')
//                     {
//                         cnt++;
//                         mx++;
//                         if (mx == k)
//                         {
//                             break;
//                         }
//                         i--;
//                     }
//                     else
//                     {
//                         mx++;
//                         if (mx == k)
//                         {
//                             break;
//                         }
//                         i--;
//                     }
//                 }

//                 if (j < s.size())
//                 {
//                     if (s[j] == 'W')
//                     {
//                         cnt++;
//                         mx++;
//                         if (mx == k)
//                         {
//                             break;
//                         }
//                         j++;
//                     }
//                     else
//                     {
//                         mx++;
//                         if (mx == k)
//                         {
//                             break;
//                         }
//                         j++;
//                     }
//                 }
//                 if (i < 0 && j >= s.size())
//                 {
//                     break;
//                 }
//             }
//             cout << cnt << endl;
//         }
//     }
//     return 0;
// }