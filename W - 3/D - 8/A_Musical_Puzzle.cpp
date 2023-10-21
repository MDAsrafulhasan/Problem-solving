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
        map<string, int> mp;
        int i = 0;
        // string s1=string(1,s[i])+string(1,s[i+1]);
        // cout<<s1;
        while (i < n - 1)
        {
            string s1 = string(1, s[i]) + string(1, s[i + 1]);
            mp[s1]++;
            i++;
        }
        int cnt = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            // cout << it->first << endl;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}