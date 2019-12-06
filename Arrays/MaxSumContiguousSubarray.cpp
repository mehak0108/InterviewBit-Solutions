nt Solution::maxSubArray(const vector<int> &A) {
    int n = A.size();
    int dp[n];
    
    dp[0] = A[0];
    
    for(int i=1;i<n;i++)
        dp[i] = max(dp[i-1],0) + A[i];
        
    
    return *max_element(dp,dp+n);
    
}