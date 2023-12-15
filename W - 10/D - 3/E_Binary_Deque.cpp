#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum < s)
        {
            cout << -1 << endl;
        }
        else
        {
            /*
            int j=0,mx=INT_MIN,cnt=0,i=0;
            sum=0;
            while(j<n)
            {
                sum+=a[j];
                if(sum==s)
                {
                    mx=max(mx,cnt);
                }
                if(sum>s)
                {
                    while(sum<=s)
                    {
                        sum-=a[i];
                        i++;
                        cnt--;
                    }
                    mx=max(mx,cnt);
                }
                j++;
            }
            cout<<(n-mx)<<endl;
            */
            int cnt = 0, x;
            sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += a[i];
                cnt++;
                if (sum == s)
                {
                    x = i + 1;
                    break;
                }
            }
            int mx = cnt;
            int z = 0;
            for (int i = x; i < n; i++)
            {
                int j = i;
                while (j < n)
                {
                    if (a[j] == 1)
                    {
                        break;
                    }
                    cnt++;
                    mx = max(cnt, mx);
                    j++;
                }
                i = j;
                sum += 1;
                while (z < n)
                {
                    if (a[z] == 1)
                    {
                        z++;
                        break;
                    }
                    cnt--;
                    z++;
                    mx = max(mx, cnt);
                }
            }
            cout << (n - mx) << endl;
        }
    }
    return 0;
}
