// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {

//         int n;
//         cin >> n;
//         string v[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         int cnt = 0;
//         for (int i = 0; i < n - 1; i++)             //bruat force
//         {
//             for (int j = 0; j < 2; j++)
//             {
//                 for (int k = i + 1; k < n; k++)
//                 {
//                     if (v[i][j] == v[k][j])
//                     {
//                         if(v[i]!=v[k])
//                         {
//                             cnt++;
//                         }
//                     }
//                     // cout<<"hi"<<endl;
//                 }
//             }
//         }
//         cout << cnt << endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<string> v;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         v.push_back(s);
//     }
//     int f[12] = {0}, l[12] = {0};                // array

//     int ans = 0;

//     ans+= f[v[0][1]-'a'];
//     for (int i = 0; i < n; i++)
//     {
//         ans += f[v[i][0]] + l[v[i][1]];
//         f[v[i][0]-'a']++;
//         l[v[i][1]-'a']++;
//     }

//     cout<<ans;
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
        vector<string> v;

        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        // for (ll i = 0; i < n; i++)
        // {
        //     cout << v[i] << endl;              // map
        // }

        map<string, ll> mp;
        map<char, ll> f;
        map<char, ll> l;
        ll ans = 0;
        // ll x;
        for (ll i = 0; i < n; i++)
        {
            ans += f[v[i][0]] + l[v[i][1]];
            ans -= 2 * mp[v[i]];
            f[v[i][0]]++;
            l[v[i][1]]++;
            mp[v[i]]++;
            // ans += x;
        }
        cout << ans << endl;
    }

    return 0;
}