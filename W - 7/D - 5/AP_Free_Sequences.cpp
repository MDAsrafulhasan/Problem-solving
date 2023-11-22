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
        bool isit = false;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int z = j + 1; z < n; z++)
                {
                    if (a[j] - a[i] == a[z] - a[j])
                    {
                        isit = true;
                    }
                }
            }
        }
        if (isit)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}