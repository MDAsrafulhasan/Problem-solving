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

        // int i = 0, j = n - 1;
        int l = -1, r = -1, ll = -1, rr = -1;
        // bool isit = false, isit2 = false;

        // while (i <= j)
        // {
        //     if (a[i] == b[i] || a[j] == b[j])
        //         continue;
        //     if (a[i] != b[i])
        //     {
        //         l = i;
        //         isit = true;
        //     }
        //     if (a[j] != b[j])
        //     {
        //         r = j;
        //         isit2 = true;
        //     }
        //     if (isit && isit2)
        //         break;

        //     i++;
        //     j--;
        // }

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                l = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                r = i;
                // isit2 = true;
                break;
            }
        }
        // int i=l;
        for (int i = l; i > 0; i--)
        {
            if (b[i - 1] <= b[i])
            {
                ll = i - 1;
            }
            else
            {
                break;
            }
        }
        // l=i;

        // int j=r;
        for (int i = r; i < n - 1; i++)
        {
            if (b[i + 1] >= b[i])
            {
                rr = i + 1;
            }

            else
            {
                break;
            }
            // j++;
        }
        // r=j;

        if (ll != -1)
        {
            cout << ll + 1 << " ";
        }
        else
        {
            cout << l + 1 << " ";
        }
        if (rr != -1)
            cout << rr + 1 << endl;
        else
            cout << r + 1 << endl;
        // cout << l + 1 << " " << r + 1 << endl;
    }
    return 0;
}