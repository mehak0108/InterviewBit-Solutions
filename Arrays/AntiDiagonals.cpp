vector<vector<int> > Solution::diagonal(vector<vector<int> > &a) {
    
    vector<int>v;
    vector<vector<int>> vec;
    int n = a.size();
    int p=n-1;
    for(int i=0;i<2*n-1;i++)
        vec.push_back(v);
 
    // int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            vec[i+j].push_back(a[i][j]);
        }
        
    }
    
    return vec;

}