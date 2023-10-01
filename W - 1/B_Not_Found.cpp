#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;
    }

    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<a[i]<<endl;
    // }

    int ith_value;
    bool isit = false;
    for(int i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            ith_value=i;
            isit =true;
            break;
        }
    }

    char x = 'a'+ith_value;
    (isit)? cout<<x : cout<<"None";
    return 0;
}