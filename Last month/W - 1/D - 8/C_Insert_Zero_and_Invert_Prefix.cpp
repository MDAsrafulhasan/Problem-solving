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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[n - 1] == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        vector<int> v;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 0)
            {
                if (i == 0 || a[i - 1] == 0)
                {
                    v.push_back(0);
                }
                else if (a[i - 1] == 1)
                {
                    int j = i - 1;
                    int cnt = 0;
                    int nx;
                    while (j >= 0 && a[j] == 1)
                    {
                        cnt++;
                        nx = j;
                        j--;
                    }
                    for (int k = 0; k < cnt; k++)
                    {
                        v.push_back(0);
                    }
                    v.push_back(cnt);
                    // j += i;
                    i=j+1;
                    // i=nx+1;
                    // cout<<i<<endl;
                }
            }
        }
        for (auto val : v)
        {
            cout << val << " ";
        }
        cout<<endl;
    }
    return 0;
}