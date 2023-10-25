#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<string> st;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s];
        st.push(s);
    }
    string s2;
    while (!st.empty())
    {
        if (mp[st.top()] == 0)
        {
            int i = st.top().size() - 1;
            s2 += string(1, st.top()[i - 1]) + string(1, st.top()[i]);
            mp[st.top()]++;
        }
        st.pop();
    }
    cout << s2;

    return 0;
}