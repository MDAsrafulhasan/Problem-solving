#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        auto it1 = lower_bound(v.begin(), v.end(), x);
        auto it2 = upper_bound(v.begin(), v.end(), x);
        int in2 = it2 - v.begin();
        int in1 = it1 - v.begin();
        int index=in2-in1;
        // cout << in1 << " " << in2 << endl;
        // cout<<"main : "<<index<<endl;


        if (in1>0 && in1<n)               // 1st part
        {
            cout<<v[in1-1]<<" ";
        }
        else if(in1==n)
        {
            cout<<v[in1-1]<<" ";
        }
        else if(in1==0)
        {
            cout<<"X ";
        }
 
        if (in2>0 && in2<n)               // 2nd part
        {
            cout<<v[in2];
        }
        else if(in1==n)
        {
            cout<<"X";
        }
        else if(in1==0)
        {
            cout<<v[in2];
        }
        cout<<endl;
    }
    return 0;
}