int Solution::lengthOfLastWord(const string s) {
    
    int n=s.length();
    
    if(n==1 && s[0]!=' ')
        return 1;
    
    int j=n-1;
    
    while(j>=0 && s[j]==' ')
    {
        j--;
    }
    
    int i=j;
    while(i>=0 && s[i]!=' ')
    {
        i--;
    }
    
    return j-i;
}