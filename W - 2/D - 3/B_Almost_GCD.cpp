#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int fr[1003] = {0};
    int mx = INT_MIN;
    int x;

    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                fr[j]++;
                mx = max(mx, fr[j]);
                // cout<<mx<<endl;
                if (mx == fr[j])
                {
                    // cout << mx << " ";
                    x = j;
                    // cout << x << endl;
                }
            }
        }
    }
    cout << x;

    return 0;
}