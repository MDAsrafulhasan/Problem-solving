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
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(cnt==a[i])
            {
                cnt++;
            }
            cnt++;
        }
        cout<<cnt-1<<endl;
        // cnt=a[0];
        // for(int i=0;i<n;i++)
        // {
        //     cin>>a[i];

        // }
    }
    return 0;

}