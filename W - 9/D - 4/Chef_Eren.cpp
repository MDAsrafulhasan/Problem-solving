#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a,b;
        cin >> n>>a>>b;
        if(n%2==0)
        {
            int x= n/2;
            int ans = (x*a)+(x*b);
            cout<<ans<<endl;
        }
        else
        {
            int x= n/2;
            int ans = (((x+1)*b) + (x*a));
            cout<<ans<<endl;;
        }
        
    }

    return 0;
}