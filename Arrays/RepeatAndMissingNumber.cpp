vector<int> Solution::repeatedNumber(const vector<int> &a) {
    vector<int> ans;
    int x,y,n=a.size();
    bool v[n+1];
    
    memset(v,true,sizeof(v));
    
    for(int i=0;i<n;i++)
    {
        if(v[a[i]])
            v[a[i]] = false;
        else
            x = a[i];
    }
    
    for(int i=1;i<=n;i++)
    {
        if(v[i])
            y = i;
    }
    ans.push_back(x);
    ans.push_back(y);
    return ans;
}