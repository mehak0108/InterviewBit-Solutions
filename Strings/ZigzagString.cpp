string Solution::convert(string s, int r) {
   
    if(r==1)
        return s;
    int n=s.length();
    string tmp="";
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<n;j=j+2*(r-1))
        {
            tmp += s[j];
            
            int q = j+2*(r-1-i);
            if(q<n && q!=j && i!=0 && i!=(r-1))
                tmp += s[q];
        }
    }
    
    return tmp;
    // if(r==1)
    //     return s;
    // string tmp;
    // int sp = 1+2*(r-2);
    // int n=s.length();
    // int i=0,j=sp,k;
    // bool fl=true;
    // int ct=1;
    // while(i<=r/2)
    // {
    //     tmp = tmp+s[i];
    //     if(fl)
    //     {   
    //         k = i+j+1;
    //         while(k<n)
    //         {
    //             tmp += s[k];
    //             k = j+k+1;
    //         }
    //         fl=false;
    //     }
    //     else
    //     {
    //         sp = sp-2;
    //         while(k<n)
    //         {
    //             j=sp;
    //             k=i+j+1;
    //             if(k<n)
    //             {
    //                 tmp += s[k];
    //             }
    //             j = ct;
    //             k=k+ct+1;
    //             if(k<n)
    //                 tmp+=s[k];
    //         }
    //         ct=ct+2;
    //     }
        
    //     i++;
    // }
    
    
    return tmp;
    
}