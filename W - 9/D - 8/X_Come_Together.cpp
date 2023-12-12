#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,aa,b,bb,c,cc;
        cin>>a>>aa>>b>>bb>>c>>cc;
        // if(aa==bb & bb==cc)
        // {
        //     if(a>b && a<c) cout<<1<<endl;
        //     else
        //     {
        //         int x= min(bb,cc);
        //         cout<<()
        //     }
        // }
        int ans=1;
        if((a<=b && a<=c) || (a>=b && a>=c))
        {
            ans+=min(abs(a-b),abs(a-c));
        }
        if((aa<=bb && aa<=cc) || (aa>=bb && aa>=cc))
        {
            ans+=min(abs(aa-bb),abs(aa-cc));
        }
        cout<<ans<<endl;
    }
    return 0;
}