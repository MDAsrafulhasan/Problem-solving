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
        int a[n+1], b[n+1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool isit = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                isit = false;
                break;
            }
        }
        if (isit)
            cout << "YES" << endl;
        else
        {
            bool isit1=true;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > b[i])
                {
                    isit1 = false;
                    break;
                }
            }
            if(!isit1) cout<<"NO"<<endl;
            else
            {
                int i;
                a[n]=a[0];
                b[n]=b[0];
                for(i=0;i<n;i++)
                {
                    if(b[i]<a[i]) break;
                    if(b[i]==a[i]) continue;
                    if(b[i]>b[i+1]+1) break;
                    // isit= true;
                }
                if(i==n) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                // bool isit2=false;
                // for(int i=n-1;i>0;i--)
                // {
                //     if(a[i-1]<=a[i] || a[i-1]==a[i]+1)
                //     {
                //         continue;
                //     }
                //     isit= true;
                // }
                // // // bool isit2=false;
                // if(!isit)
                // {
                //     cout<<"2nd YES"<<endl;
                // }
                // else cout<<"2nd NO"<<endl;
            }
        }
    }
    return 0;
}