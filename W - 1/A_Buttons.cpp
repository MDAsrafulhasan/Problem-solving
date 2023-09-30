#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n==m)
    {
        cout<<n+m;
    }
    else if(n>m)
    {
        cout<<n+(n-1);
    }
    else
    {
        cout<<m+(m-1);
    }
    return 0;
}