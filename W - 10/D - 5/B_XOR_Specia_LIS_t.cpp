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
        if(n%2==0) cout<<"YES"<<endl;
        else
        {
            bool isit=false;
            for(int i=0;i<n-1;i++)
            {
                if(a[i]>=a[i+1])
                {
                    isit=true;
                    break;
                }
            }
            if(isit) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}