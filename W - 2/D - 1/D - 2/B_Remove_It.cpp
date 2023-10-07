#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;
    // vector<long long int> v(n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // // cout<<v[i]<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i] == k)
    //         v.erase(v.begin() + i);
    // }
    for (int i = 0; i < n; i++)
    {
        if(v[i]==k) continue;
        else if (i == n - 1)
            cout << v[i];
        else
            cout << v[i] << " ";
    }
    return 0;
}