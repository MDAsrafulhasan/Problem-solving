#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n - 1);

    // for (int i = 0; i < n - 1; i++)
    // {
    //     cout<< ar[i]<<" ";
    // }

    int x;
    for (int i = 0, y = 1; i < n; i++)
    {
        if (ar[i] != y)
        {
            x = y;
            break;
        }
        y++;
    }
    cout << x;
    return 0;
}