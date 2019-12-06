int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    
    int m = A.size(), n=B.size(),p=C.size();
    
    int i=0,j=0,k=0;
    int ans=INT_MAX;
    while(i<m && j<n && k<p)
    {
        ans = min(ans,max(A[i],max(B[j],C[k])) - min(A[i],min(B[j],C[k])));
        
        int q = min(A[i],min(B[j],C[k]));
        if(q == A[i])
            i++;
        else
            if(q == B[j])
                j++;
            else 
                k++;
    }
    
    return ans;
}