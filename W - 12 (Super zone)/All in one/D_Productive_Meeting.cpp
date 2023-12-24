#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        priority_queue<pair<int,int>> q;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]!=0)
            {
                q.push({a[i],i});
            }
        }
        vector<pair<int,int>> v;
        while(q.size()>1)
        {
            pair<int,int> x = q.top();
            q.pop();

            pair<int,int> y = q.top();
            q.pop();

            v.push_back({x.second,y.second});
            if(x.first>1) q.push({x.first-1,x.second});
            if(y.first>1) q.push({y.first-1,y.second});
        }
        cout<<v.size()<<endl;
        for(auto val:v)
        {
            cout<<val.first<<" "<<val.second<<endl;
        }
    }
    return 0;
}