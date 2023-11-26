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
        int m = (n * (n - 1)) / 2;
        int a[n], b[m];
        for (int i = 0; i< m; i++)
        {
            cin >> b[i];
        }
        sort(b,b+m);
        int i = 1, j = 0;
        int xx = n - i;
        while ((n - i) > 0)
        {
            a[j] = b[xx - 1];
            j++;
            i++;
            xx+= n- i;
        }
        a[n-1]=1000000000;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}