#include <bits/stdc++.h>
using namespace std;
#define ll long long
int fr[100001];
int num;
int k;
void add(int x)
{
    fr[x]++;
    if (fr[x] == 1)
    {
        num++;
    }
}
void remove(int x)
{
    fr[x]--;
    if (fr[x] == 0)
        num--;
}
bool isit()
{
    return num <= k;
}
int main()
{
    int n;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        add(a[i]);
        while (!isit())
        {
            remove(a[l]);
            l++;
        }
        ans += i - l + 1;
        // cout<<"num : "<<num<<" , i : "<<i<<" , l : "<<l<<" , ans : "<<ans<<endl;
    }
    cout << ans << endl;
    return 0;
}