#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (n % 2 == 0)
            cout << "YES" << endl;
        else
        {
            if (k % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

        // if(n % __gcd(2,k)==0) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
    }

    return 0;
}