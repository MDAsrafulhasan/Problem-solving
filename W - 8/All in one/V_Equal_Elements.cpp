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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        int mx=INT_MIN;
        for(auto it:mp)
        {
            mx=max(mx,it.second);
        }
        cout<<n-mx<<endl;

    }
    return 0;
}