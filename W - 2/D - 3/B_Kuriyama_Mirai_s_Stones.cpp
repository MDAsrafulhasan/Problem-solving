#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int pref_xum_1[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        pref_xum_1[i] = sum;
    }
    sort(a, a + n);

    long long int pref_xum_2[n];
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        pref_xum_2[i] = sum;
    }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<pref_xum_2[i]<<endl;
    // }

    long long int q;
    cin >> q;
    while (q--)
    {
        long long int sum2 = 0;
        long long int x, i, j;
        cin >> x >> i >> j;
        if (x == 1)
        {
            if (i == 1)
                sum2 = pref_xum_1[j - 1];
            else
                sum2 = pref_xum_1[j-1] - pref_xum_1[i - 2];
        }
        else
        {
            if (i == 1)
                sum2 = pref_xum_2[j - 1];
            else
                sum2 = pref_xum_2[j - 1] - pref_xum_2[i - 2];
        }
        cout << sum2 << endl;
    }
    return 0;
}