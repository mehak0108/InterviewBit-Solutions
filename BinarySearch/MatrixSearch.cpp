int Solution::searchMatrix(vector<vector<int> > &A, int B) {
 
    int n = A.size(), m = A[0].size();
    int lo=0,hi=n-1,r=-1;
    
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(A[mid][0]<=B && A[mid][m-1]>=B)
        {
            r = mid; break;
        }
        else if(A[mid][0]<B)
            lo = mid+1;
        else
            hi = mid-1;
    }
    
    if(r==-1)
        return 0;
    lo = 0,hi = m-1;
    
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(A[r][mid]==B)
            return 1;
        else
            if(A[r][mid]<B)
                lo = mid+1;
            else
                hi = mid-1;
    }
    return 0;
}