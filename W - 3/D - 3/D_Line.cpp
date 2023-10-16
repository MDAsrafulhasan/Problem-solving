// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     int j = 0;
//     int k = 0;
//     while (j < s.size())
//     {
//         int sum = 0;
//         int cnt = 0;
//         for (int i = 0; i < n; i++)
//         {

//             if (i < n / 2)
//             {
//                 if (s[i] == 'L')
//                 {
//                     if (k >= cnt)
//                     {
//                         sum += (s.size() - (i + 1));
//                         cnt++;
//                         cout << sum << "l" << endl;
//                     }
//                     else
//                     {
//                         sum += (i - 0);
//                         cout << sum << endl;
//                     }
//                 }

//                 else
//                 {
//                     sum += s.size() - (i + 1);
//                     cout << sum << endl;
//                 }
//             }
//             else if (i == n / 2)
//             {
//                 if (s[i] == 'L')
//                 {
//                     if (k >= cnt)
//                     {
//                         sum+=(s.size()-(i+1));
//                         cnt++;
//                         cout<<sum<<"m"<<endl;
//                     }
//                     else
//                     {
//                         sum+=i;
//                         cout<<sum<<endl;
//                     }
//                 }
//                 else
//                 {
//                     sum+=s.size()-(i+1);
//                     cout<<sum<<endl;
//                 }
//             }
//             else
//             {
//                 if (s[i] == 'R')
//                 {
//                     if (k >= cnt)
//                     {
//                         sum += i;
//                         cnt++;
//                         cout << sum << "r" << endl;
//                     }
//                     else
//                     {
//                         sum += n - (i + 1);
//                         cout << sum << endl;
//                     }
//                 }
//                 else
//                 {
//                     sum += i;
//                     cout << sum << endl;
//                 }
//             }
//         }
//         cout << "ANS   " << sum << " " << endl;
//         cout << endl
//              << endl;
//         j++;
//         k++;
//     }
//     // cout<<cnt;
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
        string s;
        cin >> s;
        vector<ll> v;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                ans += i;
            else
                ans += n - (i + 1);
        }
        // cout<<ans<<endl;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                v.push_back(n - (i + 1) - i);
            else
                v.push_back(i - (n - (i + 1)));
        }
        // for(int val:v)
        // cout<<val<<endl;
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        for (ll k = 0; k < n; k++)
        {
            if (v[k] > 0)
            {
                ans += v[k];
                cout << ans << " ";
            }
            else
            {
                cout << ans << " ";
            }
        }
        cout << endl;
    }
    return 0;
}