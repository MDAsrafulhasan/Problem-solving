#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 4 == 1 || n % 4 == 2)
        cout << "NO" << endl;
    else
    {
        if (n % 4 == 0)
        {
            cout << "YES" << endl;
            cout << (n / 2) << endl;
            int cnt = 0;
            for (int i = 1; i <= n; i++)
            {
                cnt++;
                if (cnt == 1 || cnt == 4)
                {
                    cout << i << " ";
                    if (cnt == 4)
                    {
                        cnt = 0;
                    }
                }
            }
            cout << endl;
            cout << (n / 2) << endl;
            for (int i = 1; i <= n; i++)
            {
                cnt++;
                if (cnt != 1)
                {
                    if (cnt != 4)
                    {
                        cout << i << " ";
                    }
                }
                if (cnt == 4)
                {
                    cnt = 0;
                }
            }
        }
        else
        {
            // cout << "nai" << endl;
            cout << "YES" << endl;
            cout << (n / 2)+1 << endl;
            cout<<1<<" "<<2<<" ";
            int cnt = 0;
            for (int i = 4; i <= n; i++)
            {
                cnt++;
                if (cnt == 1 || cnt == 4)
                {
                    cout << i << " ";
                    if (cnt == 4)
                    {
                        cnt = 0;
                    }
                }
            }
            cout << endl;
            cout << (n / 2) << endl;
            cout<<3<<" ";
            for (int i = 4; i <= n; i++)
            {
                cnt++;
                if (cnt != 1)
                {
                    if (cnt != 4)
                    {
                        cout << i << " ";
                    }
                }
                if (cnt == 4)
                {
                    cnt = 0;
                }
            }
        }
    }
    return 0;
}