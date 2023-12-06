#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(s[0]=='0')
        {
            s.replace(0,1,"1");
            k--;
        }
        for(int i=1;i<=k;i++)
        {
            s+="0";
        }
        cout<<s<<endl;
    }
    return 0;
}