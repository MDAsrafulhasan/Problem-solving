#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        // int x=1;
        ll x = min(a, b);
        a -= x;
        b -= x;
        if (x % 2 == 0)
        {
            if (a == 0 && b == 0)
            {
                cout << "CHEFINA" << endl;
            }
            else if (a >= 2)
            {
                cout << "CHEF" << endl;
            }
            else
            {
                cout << "CHEFINA" << endl;
            }
        }
        else
        {
            if (a == 0 && b == 0)
            {
                cout << "CHEF" << endl;
            }
            else if (b >= 2)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                cout << "CHEF" << endl;
            }
        }
    }
    return 0;
}