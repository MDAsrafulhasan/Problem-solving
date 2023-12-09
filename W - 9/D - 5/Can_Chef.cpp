#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if((a*15)>=b*2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}