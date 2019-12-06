int Solution::isPalindrome(string A) {
    
    string s="";
    int n=A.length();
    
    for(int i=0;i<n;i++)
    {
        if((A[i]<=122 && A[i]>=97) || (A[i]<=57 && A[i]>=48))
            s+=A[i];
        else if(A[i]<=90 && A[i]>=65)
            s.push_back(A[i]+32);
        
    }
    
    int l = s.length();
    int st=0,ed=l-1;
    while(st<=ed)
    {
        if(s[st]!=s[ed])
            return 0;
        st++;ed--;
    }
    
    return 1;
    
}