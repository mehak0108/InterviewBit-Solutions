long long fxn(int x,int n,int d)
{
    if(n==0)
        return 1;
    if(n==1)
        return x%d;
    long long p  = fxn(x,n/2,d);
    if(n%2==0)
        return ((p%d)*(p%d))%d;
    else
        return ((((x%d)*(p%d))%d)*(p%d))%d;
}
 
int Solution::pow(int x, int n, int d) {
  
    if(x==0 && n==0)
        return 0;
    
    long long ans = fxn(x,n,d); 
    // cout<<ans;
    if(ans<0)
        return ((ans%d)+d)%d;
    return ans%d;
}