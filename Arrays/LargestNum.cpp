bool cmp(int a,int b)
{
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s3 = s1+s2;
    string s4 = s2+s1;
    
    // if(s3!=s4)
        return stol(s3)>stol(s4);
}
 
string Solution::largestNumber(const vector<int> &A) {
    
    int ct=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
            ct++;
    }
    
    if(ct==A.size())
        return to_string(0);
        
    string s="";
    vector<int>v;
    v=A;
    sort(v.begin(),v.end(),cmp);
    
    for(int i=0;i<v.size();i++)
    {
        s = s+ to_string(v[i]);
    }
    return s;
    
}