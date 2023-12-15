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
        int fr[101]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            fr[a[i]]++;
        }
        int mx=INT_MIN;
        // int mx = *max_element(a,a+n);
        for(int i=1;i<=100;i++)
        {
            if(fr[i]>0)
            {
                mx=max(mx,fr[i]);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}