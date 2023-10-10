#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int a[n];
    map<int, int> m;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        if(m[a[i]]==1)
        {
            x=a[i];
        }
    }
    cout << x;

    return 0;
}