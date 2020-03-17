vector<int> Solution::prevSmaller(vector<int> &A) {
    
    int n = A.size();
    vector<int>v;
    stack<int>s;
    s.push(-1);
    // v.push_back(-1);
    
    for(int i=0;i<n;i++)
    {
        while(A[i]<=s.top())
            s.pop();
        
        v.push_back(s.top());
        s.push(A[i]);
    }
    
    return v;
}