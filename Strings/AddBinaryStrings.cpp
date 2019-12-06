int fxn(int a,int b)
{
    if(a==1 && b==1)
        return 10;
    else
        return a+b;
}
 
string Solution::addBinary(string A, string B) {
    
    int n=A.length(),m=B.length();
    string tmp;
    int val=0;
    int i=n-1,j=m-1;
    
    while(i>=0 || j>=0 || val==1)
    {
        val+= (i>=0)?(A[i]-'0'):0;
        val+= (j>=0)?(B[j]-'0'):0;
        
        tmp += (val%2+'0');
        
        val=val/2;
        i--;j--;
        
    }
    reverse(tmp.begin(),tmp.end());
    return tmp;
    
    
    
}