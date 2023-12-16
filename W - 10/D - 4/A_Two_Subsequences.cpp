#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char min = s[0];
        int x=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<min)
            {
                min=s[i];
                x=i;
            }
        }
        string ss;
        // int k=0;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]==min)
        //     {
        //         k--;
        //         continue;
        //     }
        // }
        if(x==s.size()-1)
        {
            ss= s.substr(0,x);
        }
        else
        {
            ss= s.substr(0,x) + s.substr(x+1);
        }
        cout<<min<<" "<<ss<<endl;
    }
    return 0;
}