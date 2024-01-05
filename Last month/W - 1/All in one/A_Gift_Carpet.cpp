#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << a[i][j];
        //     }
        //     cout<<endl;
        // }
        vector<char> v;
        string s = "vika";
        int k = 0,cnt=-1;
        for (int i = 0; i < m; i++)
        {
            bool isit = false;
            for (int j = 0; j < n; j++)
            {
                if (a[j][i] == s[k])
                {
                    // cout<<i<<" "<<s[k]<<" "<<endl;
                    k++;
                    // cnt++;
                    isit=true;
                }
                if(isit)
                {
                    break;
                }
                
            }
            // cout<<"dff";
        }
        if(k==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}