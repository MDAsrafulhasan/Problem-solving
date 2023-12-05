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
        int z = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++, z += 2)
            
            {
                if (z > (n * n))
                {
                    z = 2;
                }
                cout << z<<" ";
            }
            cout << endl;
        }
    }
    return 0;
}