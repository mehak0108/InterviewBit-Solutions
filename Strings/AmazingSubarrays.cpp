bool isvowel(char ch)
{
    return (ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' ||  ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U');
}
int Solution::solve(string A) {
    
    int n=A.length();
    
    int ct=0;
    for(int i=0;i<n;i++)
    {
        if(isvowel(A[i]))
            ct = (ct+n-i)%10003;
    }
    return ct;
}