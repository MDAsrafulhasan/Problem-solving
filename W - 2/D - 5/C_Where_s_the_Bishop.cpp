#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        char a[9][9];
        for (int i = 1; i < 9; i++)
        {
            for (int j = 1; j < 9; j++)
            {
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        int j_1st_i = 0, j_1st_j = 0, j_2nd_i = 0, j_2nd_j = 0;

        for (int i = 1; i < 9; i++)
        {
            for (int j = 1; j < 9; j++)
            {
                if (a[i][j] == '#')
                {
                    cnt++;
                    if (cnt == 1)
                    {
                        j_1st_i = i;
                        j_1st_j = j;
                    }
                    else if (cnt == 2)
                    {
                        j_2nd_i = i;
                        j_2nd_j = j;
                    }
                }
            }

            if (j_2nd_j - j_1st_j == 2)
            {
                // cout << j_1st_i << " " << j_1st_j << endl;
                // cout << j_2nd_i << " " << j_2nd_j;
                break;
            }
            else
            {
                j_1st_i = 0;
                j_1st_j = 0;
                j_2nd_i = 0;
                j_2nd_j = 0;
                cnt = 0;
            }
        }
        cout << j_1st_i + 1 << " " << j_1st_j + 1 << endl;
    }
    return 0;
}