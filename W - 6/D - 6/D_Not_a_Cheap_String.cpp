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
        int n;
        cin >> n;
        // cout<<s<<endl;
        int j = 0, i = 0;
        string s1;
        int sum = 0;
        priority_queue<pair<char, int>> q;
        for (int i = 0; i < s.size(); i++)
        {
            sum += (s[i] - 96);
            q.push({s[i], i});
        }
        sort(s.begin(), s.end());
        string ss;

        // while(!q.empty())
        // {
        //     cout<<q.top().first<<" "<<q.top().second<<endl;
        //     q.pop();
        // }

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (sum <= n)
            {
                break;
            }
            sum -= (s[i] - 96);
            q.pop();
        }

        priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>> qq;
        while (!q.empty())
        {
            qq.push({q.top().second, q.top().first});
            q.pop();
        }

        while (!qq.empty())
        {
            cout <<qq.top().second;
            qq.pop();
        }
        cout<<endl;
    }
    return 0;
}