#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string s1;
    getline(cin, s1);
    string word;
    stringstream ss(s1);
    map<string, int> mp;
    while (ss >> word)
    {
        mp[word]++;
    }
    
    return 0;
}