#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll gcd;
        while (true)
        {
            gcd = __gcd(a, b);
            // cout << gcd << " " << b << endl;
            if (gcd == 1)
                break;
            b /= gcd;
            // cout << gcd << " " << b << endl;
        }
        // cout<<endl;
        if(b==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
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
//         ll a, b;
//         cin >> a >> b;
//         vector<ll> v;
//         for (ll i = 2; i * i <= b; i++)         // partially correct. try korlam but TLE khaitasi
//         {
//             while (b % i == 0)
//             {
//                 v.push_back(i);
//                 b /= i;
//             }
//         }
//         if (b > 1)
//         {
//             v.push_back(b);
//         }

//         // for(int val : v)
//         // {
//         //     cout<<val<<" ";
//         // }
//         // cout<<endl;
//         bool isit = true;
//         for (ll val : v)
//         {
//             if (a % val != 0)
//             {
//                 isit = false;
//                 break;
//             }
//         }
//         (isit) ? cout << "Yes" << endl : cout << "No" << endl;
//     }
//     return 0;
// }