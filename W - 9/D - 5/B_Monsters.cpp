
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<int> ans;
        vector<pair<int,int>> v;
        int x = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % k == 0)
            {
                ans.push_back(i);
            }
            else
            {
                v.push_back({a[i]%k,i});
            }
        }
        sort(v.begin(), v.end(),[&](pair<int,int>x,pair<int,int>y)
        {
            if(x.first == y.first)
            {
                return (x.second<y.second);
            }
            return (x.first > y.first);
        });

        for (auto val:v)
        {
            // cout << v[i].b << " " << v[i].c << endl;
            ans.push_back(val.second);
        }
        for (int val : ans)
            cout << val <<" ";
        cout<<endl;
    }
    return 0;
}


















// #include <bits/stdc++.h>
// using namespace std;
// class ready
// {
// public:
//     int b;
//     int c;
// };

// bool cmp(ready x, ready y)
// {
//     if (x.b < y.b)
//         return true;
//     else if (x.b == y.b)
//     {
//         if (x.c < y.c)
//             return true;
//         else
//             return false;
//     }
//     else
//         return false;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int a[n + 1];
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }
//         vector<int> ans;
//         // priority_queue<pair<int, int>> q;
//         // vector<ready> v;
//         ready v[n];
//         int x = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             if (a[i] % k == 0)
//             {
//                 ans.push_back(i);
//             }
//             else
//             {
//                 // q.push({a[i] % k, i});
//                 v[x].b = a[i] % k;
//                 v[x].c = i;
//                 x++;
//             }
//         }
//         // sort(v.begin(), v.end(), cmp);
//         sort(v, v + n, cmp);

//         // while (!q.empty())
//         // {
//         //     ans.push_back(q.top().second);
//         //     q.pop();
//         // }

//         for (int i = 0; i < x; i++)
//         {
//             // cout << v[i].b << " " << v[i].c << endl;
//             ans.push_back(v[i].c);
//         }
//         for (int val : ans)
//             cout << val <<" ";
//         cout<<endl;
//     }
//     return 0;
// }