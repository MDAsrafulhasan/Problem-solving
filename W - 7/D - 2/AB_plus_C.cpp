#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1000000;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (x == 1)
            cout << -1 << endl;
        else if(x<=N) cout<<x-1<<" "<<1<<" "<<1<<endl;
        else
        {
            ll rem = x%N;
            if(rem==0) cout<<x/N<<" "<<(N-1)<<" "<<x/N<<endl;
            else cout<<N<<" "<<x/N<<" "<<rem<<endl;
        }
    }
    return 0;
}