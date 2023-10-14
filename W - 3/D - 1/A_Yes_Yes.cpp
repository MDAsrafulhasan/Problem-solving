#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s="Yes";
    for(int i=0;i<53;i++)
    {
        s=s+"Yes";
    }
    // cout<<s;

    
    while(t--)
    {
        string s1;
        cin>>s1;
        int i=0,j=0;
        bool isit=false;
        while(j<s.size())
        {
            if(j+s1.size()-1<s.size())
            {
                if(s.substr(j,s1.size())==s1)
                {
                    isit=true;
                }
            }
            j++;
        }
        if(isit) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}