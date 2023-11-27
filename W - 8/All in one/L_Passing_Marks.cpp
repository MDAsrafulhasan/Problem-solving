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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        // for(int val:a)
        // {
        //     cout<<val<<" ";
        // }
        // cout<<endl;
        cout<<a[k-1]-1<<endl;
    }
    return 0;
}