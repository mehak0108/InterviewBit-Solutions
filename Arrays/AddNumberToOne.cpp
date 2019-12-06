vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> v;
    int n = A.size();
    int ct,j;
        
    long long val = 0,carry=0,p;
    
    val = A[n-1]+1;
    v.push_back(val%10);
    carry = val/10;
    for(int i=n-2;i>=0;i--)
    {
        p = A[i]+carry;
        v.push_back(p%10);
        carry = p/10;
    }
    
    if(carry!=0)
        v.push_back(carry);
        
    j = v.size()-1;
    while(v[j]==0)
    {
        v.pop_back();
        j--;
    }
    reverse(v.begin(),v.end());
    return v;
}