void Solution::setZeroes(vector<vector<int> > &A) {
    
    set<int> r,c;
    int n=A.size(), m=A[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!A[i][j])
            {
                r.insert(i);
                c.insert(j);
            }
        }
    }
    
    for(auto it=r.begin();it!=r.end();it++)
    {
        int val = *it;
        for(int j=0;j<m;j++)
        {
            A[val][j]=0;
        }
    }
    
    for(auto it=c.begin();it!=c.end();it++)
    {
        int val = *it;
        for(int i=0;i<n;i++)
        {
            A[i][val]=0;
        }
    }
    
}