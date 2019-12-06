int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    
    int n = A.size(), m = B.size(), p = C.size();
    
    int i=0,j=0,k=0;
    int ans=INT_MAX;
    while(i<n && j<m && k<p)
    {
        int cmx = max(A[i],max(B[j],C[k]));
        int cmn = min(A[i],min(B[j],C[k]));
        
        ans = min(ans,cmx-cmn);
        
        if(cmn==A[i])
            i++;
        else if(cmn==B[j])
            j++;
        else
            k++;
    }
    
    return ans;
}