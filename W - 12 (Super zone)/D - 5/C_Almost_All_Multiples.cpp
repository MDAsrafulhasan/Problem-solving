#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n % x != 0)
        {
            cout << -1 << endl;
            continue;
        }
        if (n == x)
        {
            cout << x << " ";
            for (int i = 2; i < n; i++)
            {
                cout << i << " ";
            }
            cout << 1 << endl;
            continue;
        }

        vector<int> v(n + 1);
        v[n] = 1;
        v[1] = x;
        for (int i = 2; i < n; i++)
        {
            v[i]=i;
        }
        v[x] = n;
        for (int i = 2; i < n; i++)
        {
            if (i % x == 0 && n % i == 0)
            {
                swap(v[i], v[x]);
                x = i;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}