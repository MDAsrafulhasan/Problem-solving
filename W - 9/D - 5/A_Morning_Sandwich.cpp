#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((b+c)<a)
        {
            cout<<((b+c)*2)+1<<endl;
        }
        else
        {
            cout<<a+(a-1)<<endl;
        }
    }
    return 0;
}