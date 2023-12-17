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
        string s;
        cin>>s;
        string ss=s;
        sort(ss.begin(),ss.end());
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=ss[i])
            {
                v.push_back(i+1);
            }
        }
        if(v.size()==0) cout<<0<<endl;
        else
        {
            cout<<1<<endl<<v.size()<<" ";
            for(auto val:v)
            {
                cout<<val<<" ";
            }
            cout<<endl;
        }

    }
    return 0;

}