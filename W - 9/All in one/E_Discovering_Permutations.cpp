#include<bits/stdc++.h>
#define ll long long
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int n,k;
int main()
{
    FastRead
    int t,cas=1;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << "Case " << cas++ << ":\n";
        string characters = "";
        for(int i=0;i<n;i++)
            characters += ('A'+i);
        do
        {
            for(int i=0;i<n;i++)
                cout << characters[i];
            cout << endl;
            k--;
        }
        while(next_permutation(characters.begin(),characters.end()) && k);
    }
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
//         int cnt = 0;
//         int maincnt=1;
//         cout<<"Case "<<maincnt++<<":"<<endl;

//         // for (int i = 1; i <= n; i++)
//         // {
//         //     for (int j = 1; j <= n; j++)
//         //     {
//         //         for (int z = 1; z <= n; z++)
//         //         {
//         //             if (i != j && j != z && i!=z)
//         //             {
//         //                 cout << char(i + 64) << char(j + 64) << char(z + 64) << endl;
//         //                 // cout<<i<<" "<<j<<" "<<z<<endl;
//         //                 cnt++;
//         //                 if (cnt == k)
//         //                 {
//         //                     break;
//         //                 }
//         //             }
//         //         }
//         //         if (cnt == k)
//         //         {
//         //             break;
//         //         }
//         //     }
//         //     if (cnt == k)
//         //     {
//         //         break;
//         //     }
//         // }
//     }
//     return 0;
// }