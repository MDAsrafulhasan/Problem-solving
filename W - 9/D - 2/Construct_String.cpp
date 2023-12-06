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
        int i=0;
        int j;
        string ss="";
        while(i<n)
        {
            j=i+1;
            while(s[i]==s[j] && j<n)
            {
                j++;
            }
            if((j-i)%2==0)
            {
                ss+=s[i];
                ss+=s[i];
            }
            else ss+=s[i];
            i=j;
        }
        cout<<ss<<endl;
    }
    return 0;
}