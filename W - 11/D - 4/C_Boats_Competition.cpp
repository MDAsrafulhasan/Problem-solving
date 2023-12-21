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
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        int mx=0;
        for(int i=1;i<=100;i++)
        {
            int cnt=0;
            int j=1,k=n;
            while(j<k)
            {
                if(a[j]+a[k]<i)
                {
                    j++;
                }
                else if(a[j]+a[k]>i)
                {
                    k--;
                }
                else
                {
                    cnt++;
                    j++;
                    k--;
                }
            }
            mx=max(cnt,mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}