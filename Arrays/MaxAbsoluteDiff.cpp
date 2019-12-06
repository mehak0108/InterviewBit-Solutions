int Solution::maxArr(vector<int> &A) {
    int n = A.size();
    int ans=0;
    int plus[n],minus[n];
    
    for(int i=0;i<n;i++)
    {
        plus[i] = A[i]+i;
        minus[i] = A[i]-i;
    }
    sort(plus,plus+n);
    sort(minus,minus+n);
    
    ans = max(plus[n-1]-plus[0],minus[n-1]-minus[0]);
    
    return ans;
}