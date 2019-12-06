string Solution::longestCommonPrefix(vector<string> &A) {
    
    string tmp;
    
    int n=A.size();
    int minl = INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        int l= A[i].size();
        minl = min(minl,l);
    }
    
    for(int j=0;j<minl;j++)
    {
        bool fl=true;
        int i;
        for(i=0;i<n-1;i++)
        {
            if(A[i][j]!=A[i+1][j])
            {
                fl = false;
                break;
            }
        }
        if(fl)
            tmp+=A[i][j];
    }
    
    return tmp;
    
}