#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> v, long long k) {
    int n=v.size();
    long long mx=0;
    long long i=0,j=0,sum=0;
    while(j<n)
    {
        sum+=v[j];
        while(sum>k)
        {
            sum-=v[i];
            i++;
        }
        if(sum==k)
        {
            mx=max(mx,j-i+1);
        }
        j++;
    }
    return mx;
}