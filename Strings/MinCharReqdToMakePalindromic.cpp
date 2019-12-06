int Solution::solve(string A) {
    
    int n=A.length();
    
    int maxl=-1;
    
    int j,t=1;
    
    for(j=1;j<n;j++)
    {
        string tmp1 = A.substr(0,j+1);
        string tmp2 = tmp1;
        reverse(tmp1.begin(),tmp1.end());
        if(tmp1.compare(tmp2)==0)
        {
            maxl = max(maxl,j+1);
            // cout<<maxl<<" ";
            t = j+1;
        }
        
    }
    
    
    if(maxl==n)
        return 0;
    // if(maxl==-1)
    //     return n-1;
    return n-t;
}