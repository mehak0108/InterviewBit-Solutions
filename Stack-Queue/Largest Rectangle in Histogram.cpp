int Solution::largestRectangleArea(vector<int> &A) {
    
    int n = A.size();
    stack<int>s;
    
    int i=0;
    int ar,maxar=INT_MIN;
    while(i<n)
    {
        if(s.empty() || A[s.top()]<=A[i])
            s.push(i++);
        else
        {
            int tp = s.top(); s.pop();
            
            if(s.empty())
                ar = A[tp]*i;
            else
                ar = A[tp]*(i-s.top()-1);
            maxar = max(ar,maxar);
        }
    }
    
    while(!s.empty())
    {
        int tp = s.top(); s.pop();
            
        if(s.empty())
            ar = A[tp]*i;
        else
            ar = A[tp]*(i-s.top()-1);
        maxar = max(ar,maxar);   
    }
    
    return maxar;
}