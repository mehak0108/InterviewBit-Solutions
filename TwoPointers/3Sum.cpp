int Solution::threeSumClosest(vector<int> &A, int B) {
    
    int n=A.size();
    sort(A.begin(),A.end());
    int ans=0,diff=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        int st=i+1,ed = n-1;
        
        while(st<ed)
        {
            int x = A[i]+A[st]+A[ed];
            
            if(abs(x-B)<diff)
            {
                diff = abs(x-B);
                ans = x;
            }
            
            if(x==B)
                return B;
            else if(x<B)
                st++;
            else
                ed--;
        }
    }
    
    return ans;
}