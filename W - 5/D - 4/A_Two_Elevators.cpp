#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a==b && a<c) cout<<1<<endl;
        else if(a==b && a>c) cout<<3<<endl;
        else if(a<b) cout<<1<<endl;
        else if(a==c) cout<<1<<endl;
        else if(abs(a-c)==abs(b-c)) cout<<3<<endl;
        else if(abs(a-c)> abs(b-c)) cout<<2<<endl;
        else if(abs(a-c)<abs(b-c)) cout<<1<<endl;
        // else cout<<2<<endl;
    }
    return 0;
}