int Solution::maxArea(vector<int> &A) {
    
    int n=A.size();
    if(n==1)
        return 0;
    int ans=INT_MIN,x=0;
    
    int i=0,j=n-1;
    
    while(i<j)
    {
        int cmin = min(A[i],A[j]);
        x = (j-i)*cmin;
        
        // if(x>ans)
        // {
            ans = max(x,ans);
            if(cmin == A[i])
                i++;
            else
                j--;
        // }
        // else
        // {
        //     break;
        // }
        
    }
    
    
    return ans;
}