#include <bits/stdc++.h>
using namespace std;
// const int N=1e5+2;
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
        int fr[26 + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            fr[s[i] - 96]++;
        }
        int cnt=0;
        for (int i = 1; i <= 26; i++)
        {
            if (fr[i] %2!=0)
            {
                cnt++;
            }
        }
        bool isit=true;
        for (int i = 1; i <s.size(); i++)
        {
            if (s[i-1]!=s[i])
            {
               isit=false;
            }
        }
        if(n%2==0)
        {
            if(cnt==0)
            {
                cout<<1<<endl;
            }
            else
            cout<<0<<endl;
        }
        else
        {
            if(isit)
            {
                cout<<2<<endl;
            }
            else
            {
                if(cnt>=2) cout<<0<<endl;
                else
                {
                    cout<<1<<endl;
                }
            }
        }


        // if(n<=3)
        // {
        //     if(cnt>=2)
        //     {
        //         cout<<0<<endl;
        //     }
        //     else cout<<
        // }

        // int mn=INT_MAX;
        // // if()
        // for (int i = 1; i <= 26; i++)
        // {
        //     if (fr[i] %2==0)
        //     {
        //         mn=min(mn,fr[i]);
        //     }
        // }
        // cout << endl;
    }
    return 0;
}