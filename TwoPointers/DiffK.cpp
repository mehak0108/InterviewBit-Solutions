int Solution::diffPossible(vector<int> &A, int k) {
    
    int n = A.size(),i=0;
    int j=0;
    
    while(i<n && j<n)
    {
        if(i!=j && A[i]-A[j]==k)
            return 1;
        else if(A[i]-A[j]<k)
            i++;
        else
            j++;
    }
    
    return 0;
    
}