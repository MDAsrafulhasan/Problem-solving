// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     int cnt=0;
//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i]=='A')
//         {
//             if(s[i+1]=='B')
//             {
//                 if(s[i+2]=='C')
//                 {
//                     cnt++;
//                 }
//             }
//         }
//     }
//     cout<<cnt;
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s1 = "ABC";
    int i = 0;
    int j = 0;
    int cnt = 0;
    int maincnt = 0;

    while (i < s.size())
    {
        if (s[i] == s1[j])
        {
            cnt++;
            if (cnt == 3)
            {
                maincnt++;
                j = 0;
                cnt = 0;
            }
            else
            {
                j++;
            }
        }
        else
        {
            cnt = 0;
            j = 0;
        }
        i++;
    }
    cout << maincnt;

    return 0;
}

