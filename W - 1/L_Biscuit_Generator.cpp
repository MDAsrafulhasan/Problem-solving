#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    int sum=0;
    if(a>t) cout<<"0";
    else
    {
        for(int i=a;i<=t;i+=a)
        {
            sum+=b;
        }
        cout<<sum;
    }
    return 0;
}