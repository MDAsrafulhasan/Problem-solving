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
        string s,s1;
        cin>>s;
        // s1 = s1+string(1,s[0]+97);
        // cout<<s1;
        vector<char> v;
        // int x=((s[1]-48)*10)+(s[2]-48);
        // cout<<s[1]<<" "<<x;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                int x=((s[i-2]-48)*10)+(s[i-1]-48);
                // char y=x+96;
                // cout<<i<<" "<<"1st"<<" "<<(x+96)<<endl;
                v.push_back(x+96);
                // cout<<y<<endl;
                i=i-2;
            }
            else
            {
                int l= (s[i]-48);
                v.push_back((l+96));

                // cout<<i<<" "<<"2nd"<<" "<<char(l+96)<<endl;
            }
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}