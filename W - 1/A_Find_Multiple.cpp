#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans=0;
    bool isit=false;
    for(int i=1;ans<1000;i++)
    {
        ans=c+ans;
        if(ans>= a && ans<=b)
        {
            isit=true;
            break;
        }
    }
    if(isit) cout<<ans;
    else cout<<"-1";

    return 0;
}