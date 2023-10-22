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
//         string s;
//         cin >> s;
//         map<string, int> mp;
//         int i=0;
//         // s.erase(1,2);
//         // cout<<s;

//         // string s1= s.erase(1,2);           // map dia korsi , but MLE khaisi
//         // cout<<s1;
//         string s2;
//         while(i<n-1)
//         {
//             s2=s;
//             string s1= s2.erase(i,2);
//             // cout<<s1<<endl;
//             mp[s1]++;
//             i++;
//         }
//         int cnt=0;
//         for(auto it=mp.begin();it!=mp.end();it++)
//         {
//             // cout<<it->first<<endl;
//             cnt++;
//         }
//         cout<<cnt<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt_2_string = n - 1;
        int more=0;
        int i=0;
        while(i<n-2)
        {
            if(s[i]==s[i+2])
            {
                more++;
            }
            i++;
        }
        cout<<cnt_2_string-more<<endl;
    }
    return 0;
}