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
        int a[n];
        char b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i] + 48;
        }
        string s;
        cin >> s;
        int visited[51]={0};
        for (int i = 0; i < n; i++)
        {
            int x = a[i];
            if (visited[a[i]]==1)
                continue;
            for (int j = 0; j < n; j++)
            {
                if (a[j] == x)
                {
                    b[j] = s[i];
                }
            }
            visited[a[i]]++;
            // cout << b[i];
        }
        string s1;
        for(int i=0;i<n;i++)
        {
            s1+=b[i];
        }
        if(s==s1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}