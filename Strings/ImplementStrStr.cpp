int Solution::strStr(const string A, const string B) {
    
    int n = A.length(),m = B.length();
    bool fl=true;
    for(int i=0;i<n;i++)
    {
        fl = true;
        for(int j=0;j<m;j++)
        {
            if(A[i+j]!=B[j])
            {
                fl = false;
                break;
            }
        }
        if(fl)
            return i;
    }
    
    return -1;
}