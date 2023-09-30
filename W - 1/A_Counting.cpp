#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n < m)
        cout << (m - n) + 1;
    else
        cout << "0";
    return 0;
}