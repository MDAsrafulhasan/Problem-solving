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
        set<int> s;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }

        for(auto it=s.begin();it!=s.end();it++)
        {
            v.push_back(*it);
        }
        
        reverse(v.begin(),v.end());
        cout<<(v[0]+v[1])<<endl;
    }
    return 0;
}