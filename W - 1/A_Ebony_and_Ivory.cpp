#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool isit = false;
    for (int i = 0; i <= 5000; i++)
    {
        for (int j = 0; j <= 5000; j++)
        {
            if (a * i + b * j == c)
            {
                isit = true;
                break;
            }
        }
        if (isit)
            break;
    }
    (isit) ? cout << "Yes" : cout << "No";
    return 0;
}