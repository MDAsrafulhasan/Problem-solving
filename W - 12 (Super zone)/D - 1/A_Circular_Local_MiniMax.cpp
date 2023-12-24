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
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<int> v;
            sort(a, a + n);

            for (int i = 0, j = n / 2; i < n / 2; i++, j++)
            {
                v.push_back(a[i]);
                v.push_back(a[j]);
            }
            // cout << "YES" << endl;
            // for (int val : v)
            //     cout << val << " ";
            // cout << endl;
            v.push_back(v[0]);
            v.push_back(v[1]);
            bool isit = true;
            for (int i = 1; i < v.size() - 1; i++)
            {
                if (v[i - 1] < v[i] && v[i] > v[i + 1])
                    continue;
                else if (v[i - 1] > v[i] && v[i] < v[i + 1])
                    continue;
                else
                {
                    isit = false;
                    break;
                }
            }
            if (isit)
            {
                cout << "YES" << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}