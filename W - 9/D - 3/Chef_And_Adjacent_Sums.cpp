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
        sort(a, a + n);
        int z = a[n - 1] + a[n - 2];
        int i = 0, j = n - 1;
        bool isit = true;
        while (i < j)
        {
            if (a[i] + a[j] >= z)
            {
                isit = false;
                break;
            }
            i++;
            j--;
        }
        (isit) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}