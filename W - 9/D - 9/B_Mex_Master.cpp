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
        int a[n];
        int zr=0,onno=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                zr++;
            }
            else onno++;
        }
        if(zr==0) cout<<0<<endl;
        else if(zr-1<= onno)
        {
            cout<<0<<endl;
        }
        else
        {
            int mx= *max_element(a,a+n);
            if(mx==1) cout<<2<<endl;
            else{
                cout<<1<<endl;
            }
        }

    }
    return 0;
}