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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool isit = false;
        int x = -1;
        int zero = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                isit = true;
                break;
            }
            if (b[i] != 0)
            {
                if (x == -1)
                {
                    x = a[i] - b[i];
                }
                else
                {
                    if (x != a[i] - b[i])
                    {
                        isit = true;
                        break;
                    }
                }
            }
            else
            {
                zero = max(zero, a[i] - b[i]);
            }
        }
        if(isit) cout<<"NO"<<endl;
        else if(zero<=x || x==-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}