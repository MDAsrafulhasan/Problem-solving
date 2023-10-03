#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1=0,cnt2=0;
    int main_cnt=0;
    bool isit=true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='W') isit = false;   
    }

    if(isit) cout<<"YES"<<endl;
    else
    {
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B') cnt1++;
        if(s[i]=='R') cnt2++;
    }
    int x=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W')
        {
            x=i;
            break;
        }
    }
    
    if(x==s.size()-1 && cnt1>0 && cnt2>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}