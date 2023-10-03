
vector<long long> printFirstNegativeInteger(long long int a[],long long int n, long long int k) 
{
    queue<long long int> q;
    vector<long long> v;
    for(long long int i=0,j=0;i<n;i++)
    {
        if(a[i]<0) q.push(a[i]); 
       if(i>=k-1)
       {
           if(!q.empty()) v.push_back(q.front());
           else
           v.push_back(0);
           
           if(a[j]<0)
           {
               if(!q.empty())
               q.pop();
           }
           j++;
       }
    }
    return v;
}