#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    multiset<char> st,ss;
    for(int i=0;i<n;i++)
    {
        st.insert(s[i]);
    }

    for(char c:st)
    {
        if(k>0)
        {
            ss.insert(c);
        }
        k--;
    }
    string str="";
    for(char c: s)
    {
        auto it = ss.find(c);
        if(it!=ss.end())
        {
            ss.erase(it);
        }
        else
        {
            str+=c;
        }
    }
    cout<<str<<endl;


    
    return 0;
}