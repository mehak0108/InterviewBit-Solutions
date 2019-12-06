string Solution::multiply(string A, string B) {
    
    int n=A.length(),m=B.length();
    
    if((n==1 && A[0]=='0') || (m==1 && B[0]=='0'))
        return "0";
    
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    
    // int i=n-1;
    // while(i>=0 && A[i]=='0')
    // {
    //     A.pop_back();
    //     i--;
    // }
    
    // i=m-1;
    // while(i>=0 && B[i]=='0')
    // {
    //     B.pop_back();
    //     i--;
    // }
        
    vector<int>ans;
    for(int i=0;i<(m+n);i++)
        ans.push_back(0);
        
    int p,carry=0,c1=0;
    int k=0,l;
    for(int i=0;i<m;i++)
    {
        k=i;
        // cout<<"k: "<<k<<endl;
        carry=0;
        c1=0;
        for(int j=0;j<n;j++)
        {
            p = ((j<n)? A[j]-'0': 0)*((i<m)? B[i]-'0': 0)+carry;
            
            // cout<<(p%10+c1)%10<<" ";
            l = ans[k] + (p%10)+c1;
            ans[k] = l%10;
            // cout<<"  p:"<<p<<" ans:"<<ans[k]<<endl;
            carry = p/10;
            c1 = l/10;
            // cout<<" carry:"<<carry<<" c1:"<<c1<<endl;
            k++;
        }
        // cout<<c1<<endl;
        int z = (c1+carry);
        if(z)
        {
            ans[k++]+= z%10;
            ans[k] += z/10;
        }
        
        // for(int q=0;q<k;q++)
        //     cout<<ans[q]<<" ";
        // cout<<endl;
        
    }
    
    int j=ans.size()-1;
    
    while(j>=0 && ans[j]==0)
    {
        ans.pop_back();
        j--;
    }
    
    reverse(ans.begin(),ans.end());
    string s;
    for(int i=0;i<ans.size();i++)
        s.push_back(ans[i]+'0');
    
    
        
    return s;
}