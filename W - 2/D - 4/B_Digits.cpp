#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    while(n!=0)
    {
        n/=m;
        cnt++;
    }
    cout<<cnt;
    return 0;
}