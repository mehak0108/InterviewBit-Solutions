int Solution::maximumGap(const vector<int> &A) {
    
    int n=A.size();
    int ans=0;
    
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
        v.push_back({A[i],i});
    
    sort(v.begin(),v.end());
    int r = v[n-1].second;
    for(int i=n-2;i>=0;i--)
    {
        ans = max(ans,r-v[i].second);
        r = max(r,v[i].second);
    }
    
    return ans;
}