#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        bool isit1 = false, isit2 = false, isit3 = false;
        int sum = 0;
        if (a < x)
        {
            sum += (x - a);
        }
        else
        {
            isit1 = true;
        }
        if (b < y)
        {
            sum += (y - b);
        }
        else
        {
            isit2 = true;
        }
        if (sum <= c)
        {
            isit3 = true;
        }
        if(isit3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}