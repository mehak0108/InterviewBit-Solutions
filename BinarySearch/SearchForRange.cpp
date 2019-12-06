vector<int> Solution::searchRange(const vector<int> &a, int t) {

    vector<int>v;
    int n = a.size();
    
    int lo=0,hi=n-1,st=-1,ed=-1;
    
    while(lo<=hi)
    {
        int mid = lo+(hi-lo)/2;
        if(a[mid]==t &&  (a[mid-1]<t||mid==0))
        {
            st = mid;
            break;
        }
        else if(a[mid]<t)
            lo = mid+1;
        else
            hi = mid-1;
    }
    
    lo = 0,hi=n-1;
    while(lo<=hi)
    {
        int mid = lo+(hi-lo)/2;
        if(a[mid]==t &&  (a[mid+1]>t||mid==n-1))
        {
            ed = mid;
            break;
        }
        else if(a[mid]<=t)
            lo = mid+1;
        else
            hi = mid-1;
    }
    
    v.push_back(st);
    v.push_back(ed);
    return v;
}