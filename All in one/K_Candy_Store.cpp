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
        if(a>=b)
        {
            cout<<b<<endl;
        }
        else
        {
            int x=(b-a);
            cout<<(x*2)+a<<endl;
        }
    }
    return 0;
}