#include<bits/stdc++.h>
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
        ll a[n];
        ll z=0,o=0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            // s+=a[i];
            if(a[i]==0) z++;
            if(a[i]==1) o++;
        }
        ll x= pow(2,z) * o;
        cout<<x<<endl;
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
//         int n;
//         cin >> n;
//         int a[n];
//         int s=0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             s+=a[i];
//         }
//         int sum = 0,cnt=0;
//         for (int i = 0; i < n; i++)
//         {
//             if (sum + a[i] <= s - 1)
//             {
//                 sum += a[i];
//             }
//             cout<<"1st "<<sum<<" "<<endl;
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (sum + a[j] <= s - 1)
//                 {
//                     cout<<"2nd "<<sum+a[j]<<" "<<endl;         // hoy nai
//                     if (sum + a[j] == s - 1)
//                     {
//                         cnt++;
//                         sum+=a[j];
//                         cout<<"2nd - cnt nisi "<<" "<<endl;
//                     }
//                     else
//                     {
//                         sum+=a[j];
//                         cout<<"else sum "<<sum<<endl;
//                     }
//                 }
//                 cout<<"2nd for seser cnt  "<<cnt<<endl<<endl;
//             }
//             sum = 0;
//         }
//         cout<<cnt<<endl;
//     }
//     return 0;
// }