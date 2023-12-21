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
        map<int,int> mp;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]>mx)
            {
                mx=mp[a[i]];
            }
        }
        int x=mp.size();
        // cout<<mp.size()<<endl;
        if(mx==mp.size())
        {
            cout<<mx-1<<endl;
        }

        else cout<<min(mx,x)<<endl;
        
    }

    return 0;
}