#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,h;
        cin>>n>>m>>k>>h;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            bool isit = false;
            for(int j=1;j<=m;j++)
            {
                for(int z=j+1;z<=m;z++)
                {
                    if(j==z) continue;
                    int hh=abs(h-a[i]);
                    int mhh=abs(z-j);
                    mhh*=k;
                    if(mhh==hh)
                    {
                        // cnt++;
                        isit=true;
                    }
                }
            }
            if(isit) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}