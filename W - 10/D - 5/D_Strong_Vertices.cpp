#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll mx = LONG_LONG_MIN;
        for (int i = 0; i < n; i++)
        {
            if (a[i] - b[i] > mx)
            {
                mx = a[i] - b[i];
                // cout<<mx<<endl;
            }
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (a[i]-b[i] == mx)
                v.push_back(i + 1);
        }
        cout << v.size() << endl;
        for (int val : v)
            cout << val << " ";

        cout << endl;
    }
    return 0;
}