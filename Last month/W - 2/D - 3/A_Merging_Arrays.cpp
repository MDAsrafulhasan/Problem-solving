#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
        int n, m;
        cin >> n >> m;
        int a[n + 1], b[m + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        a[n] = INT_MAX;
        b[m] = INT_MAX;

        int i = 0, j = 0, k = 0;
        int c[n + m+2];
        // vector<int> c;
        while ((i < n + 1) && (j < m + 1))
        {
            if (a[i] < b[j])
            {
                // c.push_back(a[i]);
                c[k]=a[i];
                // k++;
                i++;
            }
            else
            {
                // c.push_back(b[j]);
                c[k]=b[j];
                // k++;
                j++;
            }
            k++;
        }

        while (i < n)
        {
            // c.push_back(a[i]);
            c[k]=a[i];
            i++;
            k++;
        }
        while (j < m)
        {
            // c.push_back(b[j]);
            c[k]=b[j];
            j++;
            k++;
        }

        // for (int val : c)
        // {
        //     cout << val << " ";
        // }
        for (int x = 0; x < k-1 ; x++)
        {
            cout << c[x] << " ";
        }
        // cout<<endl;
        // for (int x = 0; x < m ; x++)
        // {
        //     cout << b[x] << " ";
        // }
    // }
    return 0;
}