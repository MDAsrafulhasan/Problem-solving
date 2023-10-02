// bismillah
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

        vector<string> str[1005];
        map<string, int> mp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                str[i].push_back(s);
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (auto word : str[i])
            {
                mp[word]++;
            }
        }
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            for (auto word : str[i])
            {
                if (mp[word] == 1)
                {
                    sum += 3;
                }
                else if (mp[word] == 2)
                {
                    sum += 1;
                }
            }
            cout << sum << " ";
            sum = 0;
        }
        cout<<endl;
    }

    return 0;
}