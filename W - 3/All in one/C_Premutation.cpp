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
        vector<int> a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int x;
                cin >> x;
                a[i].push_back(x);
            }
            mp[a[i][0]]++;
        }
        int val;
        int f_val;
        for (int i = 0; i < n - 1; i++)
        {
            val = max(mp[a[i][0]] , mp[a[i + 1][0]]);
            if(val==mp[a[i][0]])
            {
                f_val= a[i][0];
            }
            else f_val= a[i+1][0];
            // if (mp[a[i][0]] > mp[a[i + 1][0]])
            // {
            //     val = a[i][0];
            // }
            // cout<<a[i][0]<<" "<<mp[a[i][0]]<<endl;
        }
        bool isit = false;
        int cnt = 0;
        int ith;
        for (int i = 0; i < n; i++)
        {
            for (int v : a[i])
            {
                if (v != f_val)
                {
                    cnt++;
                }
                if (cnt == n - 1)
                {
                    isit = true;
                    ith = i;
                    break;
                }
            }
            if (isit)
                break;
            cnt = 0;
        }

        cout << f_val << " ";
        for (int value : a[ith])
            cout << value << " ";
        cout << endl;
    }

    return 0;
}