// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {

//         ll n;
//         cin >> n;
//         ll a[n];
//         list<int> l;
//         vector<ll> v;
//         for (int i = 0; i < n; i++)
//         {
//             ll x;
//             cin >> x;
//             v.push_back(x);
//         }

//         sort(v.begin(), v.end());

//         ll ans = 0;
//         ll i = 0;
//         ll cnt = 0;
//         while (true)
//         {
//             if (v.empty())
//                 break;

//             if (v[i + 1] == v[i] + 1)
//             {
//                 v.erase(v.begin() + i);
//             }
//             else if (v[i] == v[i + 1])
//             {
//                 i++;
//                 cnt++;
//             }
//             else
//             {
//                 v.erase(v.begin() + i);       // // vector dia try korsi but hbe na
//                 ans++;
//             }
//             if (i == v.size() - 1)
//             {
//                 v.erase(v.begin() + i);
//                 i = 0;
//                 ans++;
//             }
//             if (cnt == n)
//             {
//                 break;
//             }
//         }
//         if (cnt == n)
//             cout << cnt << endl;
//         else
//             cout << ans << endl;
//     }

//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {

//         ll n;
//         cin >> n;
//         map<int,int> mp;
//         vector<ll> v;
//         for (int i = 0; i < n; i++)         //// map dian korsi. eta hbe 
//         {
//             ll x;
//             cin >> x;
//             v.push_back(x);
//             mp[x]++;
//         }

//         sort(v.begin(), v.end());

//         ll ans = 0;
//         ll cnt = 0;
//         for(int i=0;i<n;i++)
//         {
//             if(mp[v[i]]>0)
//             {
//                 int x=v[i];
//                 ans++;
//                 while(mp[x]>0)
//                 {
//                     mp[x]--;
//                     x++;
//                 }
//             }
//         }
//         cout<<ans<<endl;

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
        multiset<int>s;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            s.insert(x);
        }

        // sort(v.begin(), v.end());
        // for(auto it=s.begin();it!=s.end();it++)           //// multuiset dia korlam .. etaw heb
        // {
        //     cout<<*it<<" ";
        // }

        int i=0;
        int ans=0;
        while(!s.empty())
        {
            int x= *s.begin();
            s.erase(s.find(x));
            x++;
            while(s.count(x))
            {
                s.erase(s.find(x));
                x++;
            }
            ans++;
        }
        cout<<ans<<endl;

    }

    return 0;
}