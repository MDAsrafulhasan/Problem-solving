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
        if(n==3)
        {
            cout<<"-1"<<endl;
        }
        else if(n%2==0)
        {
            for(int i=n;i>0;i--)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            int i=n,j=n/2;
            for(i=n;i>j+1;i--)
            {
                cout<<i<<" ";
            }
            int k=1;

            while(k<=i)
            {
                cout<<k<<" ";
                k++;
            }
            cout<<endl;
        }
    }
    return 0;
}