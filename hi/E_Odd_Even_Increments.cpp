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
        int even1 = 0, odd2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even1++;
            }
            else if (a[i] % 2 != 0)
            {
                odd2++;
            }
        }
        if (even1 == n || even1 == odd2 - 1 || odd2 == n || odd2==even1-1 || even1==odd2)
            cout << "YES" << endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
}