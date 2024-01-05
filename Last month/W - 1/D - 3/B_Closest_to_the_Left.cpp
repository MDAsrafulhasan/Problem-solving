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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<q;i++)
        {
            int x;
            cin>>x;
            auto it = upper_bound(a,a+n,x);
            cout<<it-a<<endl;
        }
    // }
    return 0;
}