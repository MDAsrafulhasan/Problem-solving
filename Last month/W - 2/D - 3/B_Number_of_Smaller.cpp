#include <bits/stdc++.h>
using namespace std;
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
    vector<int> v;
    int i = 0, j = 0, k = 0;
    // int c[n + m+2];
    vector<int> c;
    while ((i < n) && (j < m ))
    {
        if (a[i] < b[j])
        {
            // c.push_back(a[i]);
            // c[k]=a[i];
            // k++;
            i++;
        }
        else
        {
            c.push_back(i);
            // c[k]=b[j];
            // k++;
            j++;
        }
        // k++;
    }
    while (j < m)
    {
        c.push_back(n);
        j++;
    }

    // for (int j = 0; j < m; j++)
    // {
    //     while (a[i] < b[j])
    //     {
    //         i++;
    //     }
    //     v.push_back(i);
    // }
    // int x= c[c.size()-1];
    // x++;
    // while(x<n)
    // {
    //     c.push_back(x);
    //     x++;
    // }
    for (int val : c)
        cout << val << " ";
    return 0;
}