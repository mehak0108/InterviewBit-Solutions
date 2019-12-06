vector<int> Solution::getRow(int k) {
    
    vector<int>v;
    int n=k+1;
   
    int dp[n];
    for(int i=0;i<n;i++) dp[i]=0;
    dp[0]=1;
    
    for(int i=1;i<n;i++)
    {
        for(int j=min(k,i);j>0;j--)
        {
            dp[j] = dp[j-1]+dp[j];
        }
    }
    
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // v.push_back(dp[k]);
    for(int j=0;j<=k;j++)
        v.push_back(dp[j]);
        
        
    return v;
}