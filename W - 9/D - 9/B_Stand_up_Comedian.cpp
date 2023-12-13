#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0)
        {
            cout<<1<<endl;
            continue;
        }
        int ans=a;
        ans+= (2* min(b,c));
        ans+= min(a+1,abs(c-b)+d);
        cout<<ans<<endl;
    }
    return 0;
}