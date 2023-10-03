#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin>>x>>y;
    int cnt=1;
    for(long long i=1;i<y;i++)
    {
        x=x*2;
        if(x<=y) cnt++;
        else
        {
            break;
        }
    }
    cout<<cnt;
    return 0;
}