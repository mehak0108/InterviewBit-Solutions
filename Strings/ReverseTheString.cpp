void reverse(int st,int ed,string &a)
{
    while(st<=ed)
    {
        char tmp = a[st];
        a[st] = a[ed];
        a[ed] = tmp;
        st++;ed--;
    }
}
 
void Solution::reverseWords(string &a) {
 
    int n = a.length();
    
    reverse(0,n-1,a);
    // cout<<a<<endl;
    
    
    int i=0,j=0;
    while(i<n && j<n)
    {
        if(a[j+1]!=' ')
            j++;
        else
        {
            reverse(i,j,a);
            j=j+2;
            i = j;
        }
    }
    
    if(j==n)
        reverse(i,j-1,a);
    
}