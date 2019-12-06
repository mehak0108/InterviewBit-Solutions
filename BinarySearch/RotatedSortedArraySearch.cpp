int Solution::search(const vector<int> &a, int t) {
 
    int n = a.size();
        
        int lo=0,hi=n-1;
        
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            // cout<<mid<<" ";
            if(a[mid]==t)
                return mid;
            if(a[lo]<a[mid])
            {
                if(a[mid]>=t && a[lo]<=t )
                {
                    hi = mid-1;
                    // cout<<hi<<" ";
                }
                else
                    lo = mid+1;
            }
            
           
            else if(a[mid]<=t && a[hi]>=t)
                lo = mid+1;
            else
                hi = mid-1;
            
        }
        
        return -1;
}