#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cnt=1;
        if(a[0]==1) cnt++;
        bool isit=true;
        for(int i=1;i<n;i++)
        {
            if(a[i]==1)
            {
                if(a[i-1]==1) cnt+=5;
            else cnt++;
            }
            else
            {
                if(a[i-1]==0)
                {
                    isit=false;
                    break;
                }
            }
        }
        if(isit) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}