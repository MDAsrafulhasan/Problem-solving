// #include <bits/stdc++.h>
// using namespace std;
// const int x=200;
// void solve(int n,int m,int a[x][x])
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << a[i][j];
//         }
//         cout<<endl;
//     }
// }

// int main()                           // recursion way
// {
//     int n, m;
//     cin >> n >> m;
//     int a[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     solve(n,m,a);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int a[210][210];

int solve(int i, int j, int n, int m)
{
    int sum = 0;
    int barmu = 0;
    while (i + barmu < n && j + barmu < m)
    {
        sum += a[i + barmu][j + barmu];
        barmu++;
    }
    barmu = 0;
    while (i + barmu < n && j - barmu > -1)
    {
        sum += a[i + barmu][j - barmu];
        barmu++;
    }
    barmu = 0;
    while (i - barmu > -1 && j - barmu > -1)
    {
        sum += a[i - barmu][j - barmu];
        barmu++;
    }
    barmu = 0;
    while (i - barmu > -1 && j + barmu < m)
    {
        sum += a[i - barmu][j + barmu];
        barmu++;
    }
    return sum - 3 * a[i][j];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mx = max(mx, solve(i, j, n, m));
            }
        }
        cout << mx << endl;
    }
    return 0;
}