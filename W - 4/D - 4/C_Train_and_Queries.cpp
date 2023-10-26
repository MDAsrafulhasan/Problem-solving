#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n];
        map<int, pair<int,int>> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if(mp.find(a[i])==mp.end()) mp[a[i]]={i,i};
            else
            mp[a[i]].second=i;
        }

        // for (auto it : mp)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
        // cout<<endl<<endl;

        while (q--)
        {
            ll si, sj;
            cin >> si >> sj;
            if (mp.find(si) != mp.end() && mp.find(sj) != mp.end())
            {
                if(mp[si].first <mp[sj].second)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}