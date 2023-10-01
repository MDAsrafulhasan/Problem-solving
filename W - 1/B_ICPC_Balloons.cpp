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
    int a[26]={0};
    // for(int i=0;i<26;i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[s[i]-'A']==0)
        {
            sum+=2;
            a[s[i]-'A']++;
        }
        else
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    }

    return 0;
}