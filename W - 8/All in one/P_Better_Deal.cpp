#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if((100-a) > (200-(2*b)))
        {
            cout<<"SECOND"<<endl;
        }
        else if((100-a) < (200-(2*b)))
        {
            cout<<"FIRST"<<endl;
        }
        else cout<<"BOTH"<<endl;

    }
    return 0;
}