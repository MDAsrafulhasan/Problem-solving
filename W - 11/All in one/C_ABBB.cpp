#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<char> v;
        v.push_back(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                if (!v.empty())
                {
                    if (v.back() == 'B' || v.back() == 'A')
                    {
                        // cout<<s[i]<<" :"<<i+1<<" er jonno pichoner V pop hobe: "<<v.back()<<endl;
                        v.pop_back();
                        continue;
                    }
                }
                else
                {
                    // cout<<"pichoner V add hobe  : "<<s[i]<<endl;
                    v.push_back(s[i]);
                    continue;
                }
            }
            // cout<<"bayre ese add hobe "<<s[i]<<endl;
            v.push_back(s[i]);
        }
        // cout<<endl<<endl;
        cout<<v.size()<<endl;
        // for (auto val : v)
        //     cout << val;
        // cout << endl;
    }

    return 0;
}