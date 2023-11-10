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
        int fr[26+1][26+1] = {0};
        int k = 1;
        for (int i = 1; i <= 26; i++)
        {
            for (int j = 1; j <= 26; j++)
            {
                if (i != j)
                {
                    fr[i][j] = k;
                    k++;
                }
            }
        }

        cout<<fr[s[0]-96][s[1]-96]<<endl;
        
        
    }
    return 0;
}