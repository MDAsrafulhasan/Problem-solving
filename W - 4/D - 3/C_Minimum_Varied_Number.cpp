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

        vector<int> v;
        for (int i = 9; i > 0; i--)
        {
            if (n - i < 0)
            {
                continue;
            }
            n = n - i;
            v.push_back(i);

            if (n == 0)
            {
                break;
            }
        }
        reverse(v.begin(), v.end());
        for (int val : v)
        {
            cout << val;
        }

        cout << endl;
    }
    return 0;
}