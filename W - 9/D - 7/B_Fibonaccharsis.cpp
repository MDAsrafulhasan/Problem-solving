#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k>30) cout<<0<<endl;
        else
        {
            int cnt=0;
            for(int i=0;i<=n;i++)
            {
                int s=n;
                int f=i;
                bool isit=true;
                for(int j=1;j<=k-2;j++)
                {
                    int t= s-f;
                    s=f;
                    f=t;
                    if(f<=s && f>-1) continue;
                    else
                    {
                        isit=false;
                        break;
                    }
                }
                if(isit) cnt++;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}