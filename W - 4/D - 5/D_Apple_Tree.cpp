#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll N = 2e5 + 8;
vector<ll> adj[N];
vector<ll> leaf(N,0);
bool visited[N];

void dfs(ll u)
{
    visited[u]=true;
    bool isit=false;
    for(auto v : adj[u])
    {
        if(visited[v]==true)
        {
            continue;
        }
        isit=true;
        dfs(v);
        // cout<<u<<" "<<leaf[u]<<" "<<v<<" "<<leaf[v]<<" | ";
        leaf[u]+=leaf[v];
        // cout<<u<<" "<<leaf[u]<<" "<<v<<" "<<leaf[v]<<endl;
    }
    if(!isit)
    {
        leaf[u]=1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for(ll i=1;i<=n;i++)
        {
            adj[i].clear();
            visited[i]=false;
            leaf[i]=0;
        }
        for(ll i=1;i<n;i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            // cout<<u<<" "<<v<<endl;
        }
        dfs(1);

        // cout<<endl<<endl;
        ll q;
        cin>>q;
        for(ll i=0;i<q;i++)
        {
            ll x,y;
            cin>>x>>y;
            ll ans=leaf[x]*leaf[y];
            // cout<<x<<" "<<leaf[x]<<","<<y<<" "<<leaf[y]<<endl;
            cout<<ans<<endl;
        }
    }
    return 0;
}