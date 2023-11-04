#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        priority_queue<pair<char, int>> q;
        priority_queue<pair<char, int>> q1;
        priority_queue<pair<char, int>, vector<pair<char, int>>, greater<pair<char, int>>> qq;
        priority_queue<pair<char, int>, vector<pair<char, int>>, greater<pair<char, int>>> qq1;
        vector<int> v;
        vector<int> vv;
        int cost = 0;
        int cnt = 0;
        int x = 0;

        int si = 1;
        int sj = n;
        cnt += 1;
        int f = s[0];
        int l = s[n - 1];

        if (f > l)
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (s[i] <= s[0] && s[i] >= s[n-1])
                {
                    q.push({s[i], i + 1});
                    q1.push({s[i], i + 1});
                    qq.push({s[i], i + 1});
                    qq1.push({s[i], i + 1});
                }
            }
        }

        else if (f <= l)
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (s[i] >= s[0] && s[i] <= s[n-1])
                {
                    q.push({s[i], i + 1});
                    q1.push({s[i], i + 1});
                    qq.push({s[i], i + 1});
                    qq1.push({s[i], i + 1});
                }
            }
        }

        // while (!q1.empty())
        // {
        //     cout << (q1.top().first) << " " << q1.top().second << endl;
        //     q1.pop();
        // }

        // while (!qq1.empty())
        // {
        //     cout << int(qq1.top().first) << " " << qq1.top().second << endl;
        //     qq1.pop();
        // }
        // cout<<endl<<endl;

        // cout << endl<< " hi " << si << " " << sj << endl;

        if (f > l)
        {
            
            v.push_back(1);
            x = f;
            // cout << "x " << x << endl;
            // cnt++;
            // v.push_back(q.top().second);
            // q.pop();
            while (!q.empty())
            {
                x = abs(x - q.top().first);
                cost += x;
                cnt++;

                // cout << x << " " << cost << " -";

                x = q.top().first;
                v.push_back(q.top().second);
                q.pop();
            }
            cost+=abs(x-int(s[n-1]));
            cnt++;
            v.push_back(n);
            // cout << endl;
            cout << cost << " " << cnt << endl;
            for (int val : v)
                cout << val << " ";
            cout << endl;
        }

        else if (f <= l)
        {
            vv.push_back(1);
            x = f;
            // cout << "x " << x << endl;
            // cnt++;
            // vv.push_back(qq.top().second);
            // qq.pop();
            while (!qq.empty())
            {
                x = abs(x - qq.top().first);
                cost += x;
                cnt++;
                // cout << x << " " << cost << " =";
                x = qq.top().first;
                vv.push_back(qq.top().second);
                qq.pop();
            }
            cost+=abs(x-int(s[n-1]));
            cnt++;
            vv.push_back(n);
            cout << cost << " " << cnt << endl;
            for (int val : vv)
                cout << val << " ";
            cout << endl;
        }
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
//         string s;
//         cin >> s;
//         int n = s.size();
//         priority_queue<pair<int, int>> q;
//         priority_queue<pair<int, int>> q1;
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> qq;
//         vector<int> v;
//         vector<int> vv;
//         int cost = 0;
//         int cnt = 0;
//         int x = 0;
//         for (int i = 0; i < n; i++)
//         {
//             q.push({s[i], i + 1});
//             q1.push({s[i], i + 1});
//             qq.push({s[i], i + 1});
//         }
//         int si = 1;
//         int sj = n;
//         int f = s[0];
//         int l = s[n - 1];

//         while (!q1.empty())
//         {
//             cout << q1.top().first << " " << q1.top().second << endl;
//             q1.pop();
//         }

//         cout << endl<< " hi " << si << " " << sj << endl;

//         if (f > l)
//         {
//             while (!q.empty())
//             {
//                 if (q.top().second == si)
//                 {
//                     break;
//                 }
//                 q.pop();
//             }
//             x = q.top().first;
//             cout << "x " << x << endl;
//             cnt++;
//             v.push_back(q.top().second);
//             q.pop();
//             while (!q.empty())
//             {
//                 x = abs(x - q.top().first);
//                 cost += x;
//                 cnt++;
//                 cout << x << " " << cost << " -";
//                 x = q.top().first;
//                 v.push_back(q.top().second);
//                 if (q.top().second == sj)
//                     break;
//                 q.pop();
//             }
//             cout << endl;
//             cout << cost << " " << cnt << endl;
//             for (int val : v)
//                 cout << val << " ";
//             cout << endl;
//         }

//         else if (f <= l)
//         {
//             while (!qq.empty())
//             {
//                 if (qq.top().second == si)
//                 {
//                     break;
//                 }
//                 qq.pop();
//             }
//             x = qq.top().first;
//             // cout << "x " << x << endl;
//             cnt++;
//             vv.push_back(qq.top().second);
//             qq.pop();
//             while (!qq.empty())
//             {
//                 x = abs(x - qq.top().first);
//                 cost += x;
//                 cnt++;
//                 // cout << x << " " << cost << " =";
//                 x = qq.top().first;
//                 vv.push_back(qq.top().second);
//                 if (qq.top().second == sj)
//                     break;
//                 qq.pop();
//             }
//             // cout << endl;
//             cout << cost << " " << cnt << endl;
//             for (int val : vv)
//                 cout << val << " ";
//             cout << endl;
//         }
//     }
//     return 0;
// }