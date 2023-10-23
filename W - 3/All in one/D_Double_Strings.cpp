#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v;
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
            m[s]++;
        }
        // string s1= string(2,v[0][0]);bool isit=false;
        // bool isit = false;
        // int j = 0, k = 0, l = 0;
        // while (j < v[0].size())
        // {
        //     string s1;
        //     for (int k = 0; k <= l; k++)
        //     {
        //         s1 = s1 + string(1, v[0][k]);
        //     }
        //     string s2;
        //     for (int k = j + 1; k < v[0].size(); k++)
        //     {
        //         s2 = s2 + string(1, v[0][k]);
        //     }
        //     if (m[s1] > 0 && m[s2] > 0)
        //     {
        //         isit = true;
        //     }

        //     j++;
        //     k++;
        //     l++;
        //     cout << s1 << " " << s2 << endl;
        // }

        // cout << s1;
        for (int i = 0; i < n; i++)
        {
            bool isit = false;
            int j = 0, k = 0, l = 0;
            while (j < v[i].size())
            {
                string s1;
                for (int k = 0; k <= l; k++)
                {
                    s1 = s1 + string(1, v[i][k]);
                }
                string s2;
                for (int k = l + 1; k < v[i].size(); k++)
                {
                    s2 = s2 + string(1, v[i][k]);
                }
                if (m[s1] > 0 && m[s2] > 0)
                {
                    isit = true;
                    // break;
                }

                j++;
                k++;
                l++;
            }
            if (isit)
                cout << "1";
            else
                cout << "0";
        }
        cout<<endl;
    }
    return 0;
}