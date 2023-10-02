#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    while(n--)
    {
        int t;
        cin>>t;
        if(t%m==0) cnt++;
    }
    cout<<cnt;
    return 0;
}