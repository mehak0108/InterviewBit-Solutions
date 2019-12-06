int Solution::romanToInt(string A) {
 
    
    map<char,int> m;
    m['I']= 1;
    m['V']= 5;
    m['X']= 10;
    m['L']= 50;
    m['C']= 100;
    m['D']= 500;
    m['M']= 1000;
    
    int ans=0;
    int n=A.length();
 
    for(int i=0;i<n-1;i++)
    {
        if(m[A[i]]<m[A[i+1]])
            ans = ans - m[A[i]];
        else
            ans = ans + m[A[i]];
    }
    
    // if(i==n)
        ans += m[A[n-1]];
    return ans;
    
}