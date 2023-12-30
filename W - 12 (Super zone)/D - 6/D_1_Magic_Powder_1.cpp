#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], aa[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        aa[i] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int yy = k;
    int cnt = 0;
    bool is = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            int xx = a[i] - b[i];
            if (xx <= yy)
            {
                yy -= xx;
            }
            if (xx > yy)
            {
                is = true;
                break;
            }
        }
    }
    if (is)
    {
        cout << 0 << endl;
    }
    else
    { // int x = 1;
        bool isit = false;
        while (true)
        {
            for (int i = 0; i < n; i++)
            {
                a[i] += aa[i];
                if (a[i] > b[i])
                {
                    int y = a[i] - b[i];
                    k -= y;
                    b[i] = a[i];
                    if (k < 0)
                    {
                        isit = true;
                        break;
                    }
                }
                // cout<<a[i]<<" ";
            }
            // cout<<endl<<k<<endl;
            if (isit)
                break;
            else
                cnt++;
        }
        cnt += 1;
        // if (cnt == 1)
        // {
        //     cout << 0 << endl;
        // }
        cout << cnt << endl;
    }
    return 0;
}