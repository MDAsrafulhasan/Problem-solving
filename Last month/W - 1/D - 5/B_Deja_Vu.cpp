#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v;

        for (int i = 0; i < q; i++)
        {
            // cin >> v[i];
            int x;
            cin >> x;
            if (v.empty() || v.back() > x)
                v.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            // int p = pow(2,x);
            for (auto val : v)
            {

                if (a[i] % (1 << val) == 0)
                {
                    val -= 1;
                    a[i] += (1 << val);
                }
            }
        }
        // for (int i = 0; i < q; i++)
        // {
        //     int x;
        //     cin >> x;
        //     // int p = pow(2,x);
        //     for (int i = 0; i < n; i++)
        //     {
        //         if ((a[i] % (1 << x)) == 0)
        //         {
        //             x -= 1;
        //             a[i] += (1 << x);
        //         }
        //     }
        // }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}