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
        int mx=INT_MIN;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            // mx=max(mx,a[i]);
        }
        int cnt=0;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            // if(a[i]==mx)
            // {
            //     cnt++;
            // }
        }
        bool isit=true;
        for(auto it=mp.rbegin();it!=mp.rend();it++)
        {
            if(it->second%2!=0)
            {
                isit=false;
                break;
            }
        }
        if(isit) cout<<"Zenyk"<<endl;
        else cout<<"Marichka"<<endl;
        // if(cnt%2==0) cout<<"Zenyk"<<endl;
        // else cout<<"Marichka"<<endl;
        // cout<<mx<<" "<<cnt<<endl;
    }
    return 0;
}