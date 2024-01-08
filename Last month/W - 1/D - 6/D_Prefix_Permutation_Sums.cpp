#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }
        // for (int i = 0; i < n - 1; i++)
        // {
        //     cout<< a[i]<<" ";
        // }
        // cout<<endl;

        ll total = (n * (n + 1)) / 2;
        if (a[n - 2] > total)
        {
            cout << "NO" << endl;
            continue;
        }
        if(a[n-2]!=total)
        {
            a[n-1]=total;
            vector<int> ar;
            for(int i=n-2;i>=0;i--)
            {
                ar.push_back(a[i+1]-a[i]);
            }
            ar.push_back(a[0]);
            bool isit=true;
            vector<bool> visit(n+1,false);
            for(int i=0;i<n;i++)
            {
                if(ar[i]>n || visit[ar[i]])
                {
                    isit=false;
                    break;
                }
                visit[ar[i]]=true;
            }
            if(isit) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        
        vector<bool> visit(n+1,false);
        vector<ll> ans;
        for(int i=0;i<=n-2;i++)
        {
            if(i==0)
            {
                ans.push_back(a[i]);
                if(a[i]<=n)
                {
                    visit[a[i]]=true;
                }
            }
            else
            {
                ans.push_back(a[i]-a[i-1]);
                if(a[i]-a[i-1]<=n)
                {visit[a[i]-a[i-1]]=true;}
            }
        }
        vector<int> miss;
        for(int i=1;i<=n;i++)
        {
            if(!visit[i])
            {
                miss.push_back(i);
            }
        }
        if(miss.size()!=2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool isit1=false;
        for(auto val:ans)
        {
            if(miss[0]+miss[1]==val)
            {
                isit1=true;
                break;
            }
        }
        if(isit1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}