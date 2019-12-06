int Solution::power(string A) {
    
    string tmp = "1";
    string res;
    long long carry,p;
    // for(int i=2;i<=200;i++)
    while(A.length()>=tmp.length())
    {
        carry=0;
        for(int j=tmp.length()-1;j>=0;j--)
        {
            p = (tmp[j]-'0')*2+carry;
            res.push_back((p%10)+'0');
            carry = p/10;
        }
        if(carry>0)
            res.push_back(carry+'0');
        reverse(res.begin(),res.end());
        
        // cout<<res<<endl;
        
        if(A.compare(res)==0)
            return 1;
        // else if(res.length()>A.length())
        //     return 0;
        
        tmp = res;
        res.clear();
        // cout<<tmp<<endl;
    }
    
    return 0;
    
}