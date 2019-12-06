int Solution::findMinXor(vector<int> &A) {
    
    int n=A.size();
    int res=INT_MAX-1;
    sort(A.begin(),A.end());
    for(int i=0;i<n-1;i=i+1)
    {
        res = min(res,A[i]^A[i+1]);
    }
    
    return res;
}