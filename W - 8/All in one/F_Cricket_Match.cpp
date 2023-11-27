#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if ((36 * b) >= a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}