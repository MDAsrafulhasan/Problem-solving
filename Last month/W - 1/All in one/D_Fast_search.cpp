#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
        int n;
        cin>>n;
        // int a[n];
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int q;
        cin>>q;
        for(int i=0;i<q;i++)
        {
            int l,r;
            cin>>l>>r;
            auto it1 = lower_bound(a.begin(),a.end(),l);
            auto it2 = upper_bound(a.begin(),a.end(),r);
            cout<<(it2-a.begin()+1)-(it1-a.begin()+1)<<" ";
            // cout<<<<endl;
            // cout<<*it1<<" "<<*it2<<endl;
            // cout<<it1-it2<<endl;
        }
    // }
    return 0;
}