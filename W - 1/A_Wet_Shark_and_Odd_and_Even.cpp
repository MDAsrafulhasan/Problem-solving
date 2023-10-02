// bismillah
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int mn_odd = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 != 0)
        {
            mn_odd = min(mn_odd, a[i]);
        }
    }
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    // cout<<sum-mn_odd;
    if(sum%2==0) cout<<sum;
    else
    {
        sum-=mn_odd;
        cout<<sum;
    }
    return 0;
}