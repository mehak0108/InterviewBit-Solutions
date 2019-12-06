int Solution::sqrt(int n) {
 
    long long lo=1,hi=n;
    while(lo<=hi)
    {
        long long mid = lo+(hi-lo)/2;
        if(mid*mid==n)
            return mid;
        else if(mid*mid<n)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return hi;
}