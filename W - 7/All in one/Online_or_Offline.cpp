#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b;
        cin >> a >> b;
        if ((a - (.1 * a)) < b)
            cout << "ONLINE" << endl;
        else if ((a - (.1 * a)) > b)
            cout << "DINING" << endl;
        else
            cout << "EITHER" << endl;
    }
    return 0;
}