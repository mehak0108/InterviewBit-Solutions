vector<vector<int> > Solution::threeSum(vector<int> &A) {
    
    sort(A.begin(),A.end());
    vector<vector<int>> vec;
    vector<int>v;
    map<vector<int>,bool>m;
    // unordered_set<int>s;
    
    int n = A.size();
    
    for(int i=0;i<n-2;i++)
    {
        // int sum = A[i];
        int st=i+1,ed=n-1;
        v.clear();
        while(st<ed)
        {
            if(A[st]+A[ed]==(-1*A[i]))
            {
                v.push_back(A[st]);
                v.push_back(A[i]);
                v.push_back(A[ed]);
                sort(v.begin(),v.end());
                if(m.find(v)==m.end())
                {
                    m[v]++;
                    vec.push_back(v);
                }
                v.clear();
                st++;ed--;
            }
            else if(A[st]+A[ed]<(-1*A[i]))
                st++;
            else
                ed--;
            
        }
        
    }
    
    return vec;
}