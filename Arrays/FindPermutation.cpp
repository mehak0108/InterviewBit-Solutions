vector<int> Solution::findPerm(const string A, int n) {
    
    vector<int>v;
    int i=1,j=n;
    for(int k=0;k<A.length();k++)
    {
        if(A[k]=='I')
        {
            v.push_back(i); i++;
        }
        else
        {
            v.push_back(j);j--;
        }
    }
    
    if(i==j)
        v.push_back(i);
    
    return v;
}