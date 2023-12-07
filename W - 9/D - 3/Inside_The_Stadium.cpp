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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            a[i]=sum;
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        // cout<<a[i];
        {
            if(i+1==a[i])
            cnt++;
        }
        cout<<cnt<<endl;
        // cout<<endl<<endl;
    }
    return 0;
}