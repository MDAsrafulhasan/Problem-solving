#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll i = 0, j = 1, sum = 0, cnt = 0;
        sum = a[0];
        if (sum <= k)
        {
            cnt++;
        }
        while (j < n)
        {
            if (b[j - 1] % b[j] == 0)
            {
                sum += a[j];
            }
            else
            {
                sum = a[j];
                i = j;
            }
            while (sum > k)
            {
                sum -= a[i];
                i++;
            }
            cnt = max(cnt, j - i + 1);
            j++;
        }
        cout << cnt << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, k;
//         cin >> n >> k;
//         vector<ll> a(n), b(n);
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         for (ll i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }

//         // for (ll i = 0; i < n; i++)
//         // {
//         //     cout << a[i]<<" "<<b[i]<<endl;
//         // }

//         ll j = 0, i = 0, cnt = 0, sum = 0, mx = 0;
//         if(n==1)
//         {
//             sum+=a[0];
//             if(sum<=k)
//             {
//                 cout<<1<<endl;
//             }
//             else
//             {
//                 cout<<0<<endl;
//             }
//             continue;
//         }
//         while (j < n)
//         {
//             sum += a[j];
//             if (sum <= k)
//             {
//                 if (j <= n - 2)
//                 {
//                     if (b[j] % b[j + 1] == 0)
//                     {
//                         cnt++;
//                     }
//                     else if (b[j] % b[j + 1] != 0)
//                     {
//                         cnt++;
//                         mx = max(mx, cnt);
//                         cnt = 0;
//                         sum = 0;
//                     }
//                 }
//                 // cout << "if = " << sum << " " << cnt << " " << mx << endl;
//             }
//             else if (sum > k)
//             {
//                 if (j <= n - 2)
//                 {

//                     if (b[j] % b[j + 1] == 0)
//                     {
//                         cnt++;
//                         while (sum > k)
//                         {
//                             sum -= a[i];
//                             i++;
//                             cnt--;
//                         }
//                         mx = max(mx, cnt);
//                     }
//                     else if (b[j] % b[j + 1] != 0)
//                     {
//                         mx = max(mx, cnt);
//                         // cnt = 0;
//                         // sum = 0;
//                         sum = 0;
//                         cnt = 0;
//                     }
//                     // cout << "else if = " << sum << " " << cnt << " " << mx << endl;
//                 }
//                 // cout<<"if = "<<sum<<" "<<cnt<<endl;
//             }
//             j++;
//             // cout<<sum<<" ";
//         }
//         j--;
//         if (sum <= k)
//         {
//             if (b[j - 1] % b[j] == 0)
//             {
//                 cnt++;
//             }
//             // else
//             // {
//             //     cnt=0;
//             // }
//             // cout << "2nd if = " << sum << " " << cnt << " " << mx << endl;
//         }
//         else
//         {
//             cnt--;
//             // cout << "2nd else = " << sum << " " << cnt << " " << mx << endl;
//         }
//         mx = max(mx, cnt);
//         cout << mx << endl;
//     }
//     return 0;
// }