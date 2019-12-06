vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int>ans;
    int n = A.size();
    int i=0,j=n-1;
    bool fl=false;
    
    while(i<n-1)
    {
        if( A[i]<=A[i+1])
            i++;
        else
            break;
    }
    
    if(i==n-1)
    {
        ans.push_back(-1);
        return ans;
    }
    while(j>0)
    {
        if(A[j]<A[j-1])
            break;
        else
            j--;
    }
    
    int cmin=INT_MAX,cmax=INT_MIN;
    
    for(int k=i;k<=j;k++)
    {
        cmin = min(cmin,A[k]);
        cmax = max(cmax,A[k]);
    }
    int k;
    for(k=0;k<=i-1;k++)
    {
        if(A[k]>cmin)
            break;
    }
    
    i=k;
    
    for(k=n-1;k>=j;k--)
    {
        if(A[k]<cmax)
            break;
    }
    j=k;
    ans.push_back(i);
    ans.push_back(j);
    return ans;
}