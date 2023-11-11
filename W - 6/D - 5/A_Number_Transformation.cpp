#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<0<<" "<<0<<endl;
        }
        else
        {
            if(y%x==0)
            {
                cout<<1<<" "<<(y/x)<<endl;
            }
            else{
                cout<<0<<" "<<0<<endl;
            }
        }
    }
    return 0;
}