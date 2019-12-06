string fxn(string a)
{
    int n=a.length();
    string z;
    int ct=1;
    // int i=0;
    // bool fl=false;
    for(int i=0;i<n;i++)
    {
        if( i<n-1 && a[i]==a[i+1])
        {
            ct++;
        }
        else{
            z.push_back(ct+'0');
            z.push_back(a[i]); 
            ct=1;
        }
    }
    return z;
}
string Solution::countAndSay(int n) {
    
    
    if(n==1)
        return "1";
    if(n==2)
        return "11";
    if(n==3)
        return "21";
    string tmp = "21",ans;    
    for(int i=4;i<=n;i++)
    {
        ans = fxn(tmp);
        tmp = ans;
    }
    return ans;
}