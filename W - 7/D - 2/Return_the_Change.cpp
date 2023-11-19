#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        double n;
        n=a*0.1;
        // if(n<5) cout<<
        cout<<100-(round(n)*10)<<endl;
    }
    return 0;
}