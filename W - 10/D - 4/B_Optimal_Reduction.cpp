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
        int mx=INT_MIN;
        int x=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>mx)
            {
                mx=a[i];
                x= i;
            }
        }
        bool isit=true;
        // int y=x;
        // x++;
        // while(x<n-1)
        // {
        //     if(a[x] > mx)
        //     {
        //         isit=false;
        //         break;
        //     }
        //     x++;
        // }
        // y--;
        // while(y>=0)
        // {
        //     if(a[y] > mx)
        //     {
        //         isit=false;
        //         break;
        //     }
        //     y--;
        // }
        for(int i=x+1;i<n;i++)
        {
            if(a[i-1]<a[i])
            {
                isit=false;
                break;
            }
        }

        for(int i=x-1;i>=0;i--)
        {
            if(a[i] > a[i+1])
            {
                isit=false;
                break;
            }
        }
        if(isit) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}