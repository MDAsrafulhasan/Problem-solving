#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        sum+=n;
        while(n!=0)
        {
            n=n/2;
            sum+=n;
        }
        cout<<sum<<endl;
    }
    return 0;
}