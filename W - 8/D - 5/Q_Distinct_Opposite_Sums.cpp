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
        int i;
        for(i=1;i<=n/2;i++)
        cout<<i<<" ";
        while(n>=i)
        {
            cout<<n<<" ";
            n--;
        }
        cout<<endl;
    }
    return 0;
}