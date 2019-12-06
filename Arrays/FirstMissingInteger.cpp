int Solution::firstMissingPositive(vector<int> &A) {
    
    int n = A.size();
    
    bool v[n+2];
    for(int i=1;i<=n+1;i++) v[i]=false;
    
    for(int i=0;i<n;i++)
    {
        if(A[i]>0 && A[i]<=n)
            v[A[i]]=true;
    }
    
    for(int i=1;i<=n+1;i++)
    {
        if(v[i]==false)
        {
            return i;
        }
    }
    return 1;
}