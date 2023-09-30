#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans = pow(a,2)+pow(b,2);
    c=pow(c,2);
    (ans<c)? cout<<"Yes" : cout<<"No";
    return 0;
}