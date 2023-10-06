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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n < 3)
            cout << "-1" << endl;
        else
        {

            bool isit = false;
            int x;
            const int N = 2 * 1e5 + 5;
            int fr[N]={0};
            for (int i = 0; i < n; i++)
            {
                fr[a[i]]++;
                if (fr[a[i]] >= 3)
                {
                    x = a[i];
                    isit = true;
                    // break;
                }
            }
            if (isit)
                cout << x << endl;
            else
                cout << "-1" << endl;
        }
    }
    return 0;
}