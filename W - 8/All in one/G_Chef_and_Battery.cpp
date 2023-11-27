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
        int cnt=0;
        while(n!=50)
        {
            if(n>50)
            {
                n-=3;
                cnt++;
            }
            else
            {
                n+=2;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}