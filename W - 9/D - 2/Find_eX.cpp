#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a+1)%b==(c+1)%d)
        {
            cout<<1<<endl;
            continue;
        }

        ll gcd = __gcd(b,d);
        ll x =(b/gcd)*d;
        ll aa = (a-(a%b));
        cout<<(aa+x)-a<<endl; 
        // if(a%b==0)
        // {
        //     cout<<x<<endl;
        // } 
        // else
        // {
        //     cout<<(x-(a%b))<<endl;
        // }
    }
    return 0;
}