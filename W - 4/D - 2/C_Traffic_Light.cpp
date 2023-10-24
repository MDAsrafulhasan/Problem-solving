#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char x;
        cin >> n >> x;
        string s;
        cin >> s;
        // map<char,int> mp;
        // for (int i = 0; i < n; i++)
        // {
        //     mp.insert({s[i],i});
        // }
        s += s;
        int i = 0;
        int cnt = 0, ans = INT_MIN;
        // cout << s.size() << endl;
        if(x=='g')
        {
            cout<<"0"<<endl;
        }
        else 
        {
            while (i < s.size())
        {
            if (s[i] == x)
            {
                int j = i;
                if (i != s.size() - 1)
                {
                    i++;
                    while (i<s.size() && s[i] != 'g')
                    {
                        i++;
                    }
                }

                cnt = i - j;

                ans = max(cnt, ans);
                // cout << "yo " << cnt << " " << ans << endl;
            }
            i++;
        }
        cout << ans<<endl;
        }
    }
    return 0;
}