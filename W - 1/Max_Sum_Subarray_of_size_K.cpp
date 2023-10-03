class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &a , int n){
         long long int mx=INT_MIN;
        long long int sum=0;
        for(int i=0,y=0;i<n;i++)
        {
            sum+=a[i];
            if(i>=k-1)
            {
                mx=max(mx,sum);
                sum-=a[y];
                y++;
            }
        }
        return mx;
    }
};
