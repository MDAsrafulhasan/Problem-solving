#include<bits/stdc++.h>
using namespace std;

//   public:
    int lenOfLongSubarr(int a[],  int n, int s) 
    { 
    int sum = 0;
    map<int, int> mp;
    int mx=0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == s)
        {
            // cout << i + 1 << endl;
            mx=max(mx,i+1);
        }
        // if (sum > s)
        // {
            if (mp.find(sum - s) != mp.end())
            {
                // cout << mp[sum - s] << " " << i << " " << i - mp[sum - s] << endl;
                mx=max(mx,i-mp[sum-s]);
            }
        // }
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }
    return mx;
    } 