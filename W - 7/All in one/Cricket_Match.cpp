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
        if(a>(b*36)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}