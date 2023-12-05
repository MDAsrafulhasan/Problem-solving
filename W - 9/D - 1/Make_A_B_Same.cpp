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
        int a[n],b[n];
        int cnt1=0,cnt0=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1) cnt1++;
            else cnt0++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        
        if(a[0]!=b[0] || a[n-1]!=b[n-1])
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool isit=false;
        for(int i=1;i<n-1;i++)
        {
            if(a[i]!=b[i] && a[i]==0 && cnt1==0)
            {
                cout<<"NO"<<endl;
                isit=true;
                break;
            }
            else if(a[i]!=b[i] && a[i]==1)
            {
                cout<<"NO"<<endl;
                isit=true;
                break;
            }
        }
        if(!isit) cout<<"YES"<<endl;
    }
    return 0;
}