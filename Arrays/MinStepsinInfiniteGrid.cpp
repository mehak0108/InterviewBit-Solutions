int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans = 0;
    int n = A.size();
    
    for(int i=0;i<n-1;i++)
    {
        int diffx = abs(A[i+1]-A[i]);
        int diffy = abs(B[i+1]-B[i]);
        
        ans+= max(diffx,diffy);
    }
    return ans;
}