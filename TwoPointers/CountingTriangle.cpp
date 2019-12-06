int Solution::nTriang(vector<int> &A) {
    
    long long ct=0;
    int n = A.size();
    sort(A.begin(),A.end());
    
    for(int i=n-1;i>=2;i--)
    {
        int l=0,r=i-1;
        
        while(l<r)
        {
            if(A[l]+A[r]>A[i])
            {
                ct = (ct + r-l)%(long long)(1e9+7);
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    return ct%(long long)(1e9+7);
}