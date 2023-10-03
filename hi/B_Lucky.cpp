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
    int sum=0;
    for(int i=0;i<=2;i++)
    {
        sum+=s[i];
    }
    int sum2=0;
    for(int i=3;i<=s.size();i++)
    {
        sum2+=s[i];
    }
    if(sum==sum2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}