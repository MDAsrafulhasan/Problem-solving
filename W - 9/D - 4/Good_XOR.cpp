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
        int cnt1=0,cnt0=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1) cnt1++;
            else cnt0++;
        }

        if(n%2!=0 || cnt0==n || (n==2 && cnt1==n)) cout<<-1<<endl;
        else
        {
            // if(cnt1==n || cnt0==n) cout<<-1<<endl;
            if(cnt1==cnt0) cout<<0<<endl;
            else if(cnt1<cnt0) cout<<(n/2)-cnt1<<endl;
            else
            {
                int x = (n/2)-cnt0;
                if(x%2==0)
                cout<<x/2<<endl;
                else
                {
                    cout<<ceil((x*(1.0)/2)+1)<<endl;
                }
            }
        }

    }
    return 0;
}