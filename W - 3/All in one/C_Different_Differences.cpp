#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int k=1;
        int i=1;
        int dif_j=1;
        while(k<=a)
        {
            cout<<i<<" ";
            int x=i+dif_j;
            int baki = b-x;
            int ghor= a-(k+1);
            if(baki>=ghor)
            {
                i=i+dif_j;
            }
            else
            {
                i++;
            }
            k++;
            dif_j++;
        }
        cout<<endl;
        
    }
    return 0;
}