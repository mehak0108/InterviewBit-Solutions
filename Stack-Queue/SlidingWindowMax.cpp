class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& A, int k) {
        
        int n = A.size();
        
        
        vector<int>ans;
        if(n==0) return ans;
        vector<int>left(n),right(n);
        
        for(int i=0;i<n-k+1;i++) ans.push_back(0);
        left[0] = A[0];
        right[n-1] = A[n-1];
        
        for(int l=1;l<n;l++)
        {
            left[l] = l%k? max(left[l-1],A[l]):A[l];
            
            int r = n-l-1;
            right[r] =  (r+1)%k? max(right[r+1],A[r]):A[r];
        }
        
        for(int i=0;i<n-k+1;i++)
            ans[i] = max(right[i],left[i+k-1]);
        
        return ans;
    }
};