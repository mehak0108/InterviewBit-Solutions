vector<vector<int> > Solution::solve(int A) {
    
    vector<vector<int>> vec;
    vector<int> v;
    // int v[n][n];
    
    // for(int i=0;i<n;i++)
    // {
        
    //     for(int j=0;j<=i;j++)
    //     {
    //         if(i==j || !j )
    //             v[i][j] = 1;
    //         else
            
    //             v[i][j] = v[i-1][j-1]+v[i-1][j];
    //         c.push_back(v[i][j]);
    //     }
    //     vec.push_back(c);
    // }
    
    for(int i=0;i<A;i++)
    {
        v.clear();
        for(int j=0;j<=i;j++)
            v.push_back(0);
        vec.push_back(v);
    }
    
    for(int i=0;i<A;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==j || !j )
                vec[i][j]=1;
        }
    }
    
    for(int i=2;i<A;i++)
    {
        for(int j=1;j<i;j++)
        {
            vec[i][j] = vec[i-1][j-1]+vec[i-1][j];
        }
    }
    
    // for(int i=0;i<A;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //         cout<<vec[i][j]<<" ";
    //     cout<<endl;
    // }
    
    return vec;
        
}