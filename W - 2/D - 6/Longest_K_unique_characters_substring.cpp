#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        
    int i=0,j=0;
    int uni=0;
    int fr[26]={0};
    int mx=0;
    while(j<s.size())
    {
        fr[s[j]-'a']++;
        if(fr[s[j]-'a']==1)
        {
            uni++;
        }

        while(uni>k)
        {
            fr[s[i]-'a']--;
            if(fr[s[i]-'a']==0)
            {
                uni--;
            }
            i++;
        }

        if(uni==k)
        {
            // cout<<j-i+1<<endl;
            mx=max(mx,j-i+1);
        }

        j++;
    }
    if(mx>0) return mx;
    else
    {
        return -1;
    }
    }
};
