vector<vector<int> > Solution::generateMatrix(int n) {
    
    vector<int> v(n);
    vector<vector<int>> vec;
    int a[n][n];
    
    for(int i=0;i<n;i++)
    {
        vec.push_back(v);
    }
    
    
    int dir=0;
    int ct=1;
    
    int l=0,r=n-1, t=0,d=n-1;
    
    while(l<=r && t<=d)
    {
        if(dir==0)
        {
            for(int j=l;j<=r;j++)
            {
                a[t][j] = ct;
                ct++;
            }
            t++;
        }
        if(dir==1)
        {
            for(int j=t;j<=d;j++)
            {
                a[j][r] = ct;
                ct++;
            }
            r--;
        }
        if(dir==2)
        {
            for(int j=r;j>=l;j--)
            {
                a[d][j] = ct;
                ct++;
            }
            d--;
        }
        if(dir==3)
        {
            for(int j=d;j>=t;j--)
            {
                a[j][l] = ct;
                ct++;
            }
            l++;
        }
        
        dir = (dir+1)%4;
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            vec[i][j] = a[i][j];
        }
    }
    
    return vec;
}