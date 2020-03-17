int fxn(int a,int b, string ch)
{
    if(ch=="+")
        return a+b;
    if(ch=="-")
        return a-b;
    if(ch=="*")
        return a*b;
    if(ch=="/" && b!=0)
        return a/b;
    return 0;
}
 
bool check(string s)
{
    return (s!="+" && s!="-" && s!="*" && s!="/");
}
 
int Solution::evalRPN(vector<string> &A) {
    
    stack<int>s;
    int n = A.size();
    
    for(int i=0;i<n;i++)
    {
        string p = A[i];
        if(check(p))
        {
            s.push(stoi(p));
        }
        else
        {
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();
            int val = fxn(a,b,p);
            s.push(val);
        }
    }
    
    return s.top();
    
}