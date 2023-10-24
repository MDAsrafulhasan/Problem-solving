#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int l1 = s1.size() - 1;
        int l2 = s2.size() - 1;

        if (s1[l1] == 'L' || s2[l2] == 'L')
        {
            if (s1[l1] == s2[l2])
            {
                if (s1.size() == s2.size())
                {
                    cout << "=" << endl;
                }
                else if (s1.size() > s2.size())
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }

            else if (s1[l1] == 'L')
            {
                cout << ">" << endl;
            }

            else
            {
                cout << "<" << endl;
            }
        }

        else if (s1[l1] == 'M' || s2[l2] == 'M')
        {
            if (s1[l1] == s2[l2])
            {
                if (s1.size() == s2.size())
                {
                    cout << "=" << endl;
                }
                else if (s1.size() > s2.size())
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else if (s1[l1] == 'M')
            {
                cout << ">" << endl;
            }

            else
            {
                cout << "<" << endl;
            }
        }
        else if(s1[l1] == 'S' && s2[l2] == 'S')
        {
            if(s1.size()==s2.size())
            {
                cout<<"="<<endl;
            }
            else if(s1.size()>s2.size())
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<">"<<endl;
            }
        }
    }
    return 0;
}