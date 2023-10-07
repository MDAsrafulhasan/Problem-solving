
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> v;
    for (int i = 2; i <= 3000; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        if (cnt == 1)
        {
            v.push_back(i);
        }
        cnt = 0;
    }
    int ans = 0;
    // for(int val:v) cout<<val<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int val : v)
        {
            if (val > i)
                break;
            else if (i % val == 0)
                cnt++;
        }
        if (cnt == 2)
            ans++;
        cnt=0;
    }
    cout << ans;
    return 0;
}