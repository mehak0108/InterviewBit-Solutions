int Solution::braces(string A) {
    
    int n = A.length();
    stack<char>s;
    bool fl=false;
    for(int i=0;i<n;i++)
    {
        if(A[i]!=')')
        {
            s.push(A[i]);
        }
        else
        {
            while(!s.empty())
            {
                if(s.top()=='(' && fl)
                {
                    s.pop();
                    fl = false;
                    break;
                }
                else if(s.top()=='(' && !fl)
                    return 1;
                else
                {
                    if(s.top()=='+' || s.top()=='-' || s.top()=='*' || s.top()=='/')
                        fl = true;
                    s.pop();
                }
            }
        }
    }
    
    return 0;
}