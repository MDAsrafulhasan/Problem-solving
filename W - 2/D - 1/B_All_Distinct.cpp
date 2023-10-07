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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        int x = n - s.size();
        if (x % 2 != 0)
        {
            x = x + 1;
            cout << n - x << endl;
        }
        else
            cout << n-x << endl;
    }
    return 0;
}