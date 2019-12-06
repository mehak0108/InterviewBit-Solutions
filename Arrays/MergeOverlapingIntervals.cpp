bool cmp(Interval a, Interval b)
{
    return (a.start<=b.start);
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    
    int n = A.size();
    sort(A.begin(),A.end(),cmp);
    
    Interval in;
    vector<Interval> ans;
    
    ans.push_back(A[0]);
    
    for(int i=1;i<n;i++)
    {
        if(ans[ans.size()-1].end< A[i].start)
            ans.push_back(A[i]);
        else
            if(ans[ans.size()-1].end<A[i].end)
                ans[ans.size()-1].end = A[i].end;
    }
    
    return ans;
}