vector<int> Solution::maxset(vector<int> &A) {
    vector<int>v;
    int n=A.size();
    long long pref[n];
    
    if(A[0]>0) pref[0]=A[0];
    else pref[0]=0;
    for(int i=1;i<n;i++)
    {
        if(A[i]>=0 && pref[i-1]>=0)
            pref[i] = pref[i-1]+A[i];
        else if(A[i]>=0 && pref[i-1]<0)
            pref[i]=A[i];
        else if(A[i]<0)
            pref[i] = A[i];
    }
    
    // for(int i=0;i<n;i++)
    //     cout<<pref[i]<<" ";
        
    // all negative
    bool check=true;
    for(int i=0;i<n;i++)
    {
        if(pref[i]>=0)
            check=false;
    }
    if(check)
        return v;
    
    long long maxsum=0;
    int maxl=0,st,ed;
    bool fl;
    int i=0,j=0;
    while(i<n && j<n)
    {
        fl = false;
        if((j!=n-1 && pref[j]>=0 && pref[j+1]<0)||(j==n-1 && pref[j]>=0))
        {
            if(maxsum<pref[j])
            {
                maxsum = pref[j];
                maxl = j-i+1;
                st=i;ed=j;
            }
            else
            if(maxsum==pref[j])
            {
                if(maxl<j-i+1)
                {
                    st=i;ed=j;   
                    maxl = j-i+1;
                }
            }
            j=j+2;
            i=j;
            fl = true;
        }
        
        if(fl==false)
        {
            j++;
        }
    }
    
    for(int i=st;i<=ed;i++)
    {
        if(A[i]>=0)
            v.push_back(A[i]);
    }
        
    return v;
    
}