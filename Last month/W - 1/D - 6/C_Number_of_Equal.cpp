#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll ans = 0;
    for (int i = 0, s = 0, e = 0; i < m; i++)
    {
        while (s < n && a[s] < b[i])
            s++;
        while (e < n && a[e] <= b[i])
            e++;

        // cout << b[i]<<" "<<i<< " " << s << " " << e << endl;
        ans += (e - s);
    }
    cout<<ans<<endl;
    return 0;
}