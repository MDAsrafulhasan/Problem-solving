#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int tree[N * 3];
void build(int node, int l, int r, int a[])
{
    if (l == r)
    {
        tree[node] = a[l];
        return;
    }
    int mid = (l + r) / 2;
    int leftnode = node * 2;
    int rightnode = leftnode + 1;
    build(leftnode, l, mid, a);
    build(rightnode, mid + 1, r, a);
    tree[node] = tree[leftnode] + tree[rightnode];
}
void update(int node, int l, int r, int indx, int val)
{
    if (indx < l || r < indx)
    {
        return;
    }
    if (l == r && indx == l)
    {
        tree[node] += val;
        return;
    }
    int mid = (l + r) / 2;
    int leftnode = node * 2;
    int rightnode = leftnode + 1;
    update(leftnode, l, mid, indx, val);
    update(rightnode, mid + 1, r, indx, val);
    tree[node] = tree[leftnode] + tree[rightnode];
}
int printValue(int node, int l, int r, int x, int y)
{
    if (y < l || r < x)
    {
        return 0;
    }
    if (x <= l && r <= y)
    {
        return tree[node];
    }
    int mid = (l + r) / 2;
    int leftnode = node * 2;
    int rightnode = leftnode + 1;
    return printValue(leftnode, l, mid, x, y) + printValue(rightnode, mid + 1, r, x, y);
}
void updatebaftergiven(int node, int l, int r, int indx)
{
    if (indx < l || r < indx)
    {
        return;
    }
    if (l == r && indx == l)
    {
        cout << tree[node] << endl;
        tree[node] = 0;
        return;
    }
    int mid = (l + r) / 2;
    int leftnode = node * 2;
    int rightnode = leftnode + 1;
    updatebaftergiven(leftnode, l, mid, indx);
    updatebaftergiven(rightnode, mid + 1, r, indx);
    tree[node] = tree[leftnode] + tree[rightnode];
}
int main()
{
    int t;
    cin >> t;
    int cnt = 1;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        build(1, 0, n - 1, a);
        cout << "Case " << cnt++ << ":" << endl;
        for (int i = 1; i <= q; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                int x;
                cin >> x;
                // cout << a[x] << endl;
                // cout << "hi1" << endl;
                updatebaftergiven(1, 0, n - 1, x);
                // for (int i = 1; i <= 9; i++)
                // {
                //     cout << tree[i] << " ";
                // }
                // cout << endl;
            }
            else if (x == 2)
            {
                int indx, val;
                cin >> indx >> val;
                // cout << "hi2" << endl;
                update(1, 0, n - 1, indx, val);
                // for (int i = 1; i <= 9; i++)
                // {
                //     cout << tree[i] << " ";
                // }
                // cout << endl;
            }
            else
            {
                int x, y;
                cin >> x >> y;
                // cout << "hi3" << endl;
                cout << printValue(1, 0, n - 1, x, y) << endl;
                // for (int i = 1; i <= 9; i++)
                // {
                //     cout << tree[i] << " ";
                // }
                // cout << endl;
            }
        }
    }
    return 0;
}