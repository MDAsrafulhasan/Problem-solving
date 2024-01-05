#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
        int n,q;
        cin>>n>>q;
        // int a[n];
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<q;i++)
        {
            int x;
            cin>>x;
            auto it = lower_bound(a.begin(),a.end(),x);
            cout<<it-a.begin()+1<<endl;
        }
    // }
    return 0;
}