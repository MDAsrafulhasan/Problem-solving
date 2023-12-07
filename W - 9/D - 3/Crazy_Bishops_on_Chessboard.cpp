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
        if(n<=2) cout<<0<<endl;
        else
        {
            if(n%2==0)
            {
                int x= (n/2)-1;
                int ans= (x*2+1)+(x-1);
                cout<<ans<<endl;
            }
            else
            {
                int x=(n/2);
                int ans=(x*2)+(x-1);
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}