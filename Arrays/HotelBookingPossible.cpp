bool cmp(pair<int,int>a, pair<int,int>b)
{
    return a.first<b.first;
}
 
bool Solution::hotel(vector<int> &a, vector<int> &d, int k) {
    
    // vector<pair<int,int>>v;
    int n = a.size();
    sort(a.begin(),a.end());
    sort(d.begin(),d.end());
    
    int ct=0;
    int i=0,j=0,mx=0;
    while(i<n && j<n)
    {
        if(a[i]<d[j])
        {
            ct++; i++;
        }
        else
        if(a[i]>d[j])
        {
            ct--;j++;
        }
        else
        if(a[i]==d[j])
        {
            i++;j++;
        }
        if(mx<ct)
            mx = ct;
    }
    
    return (mx<=k);
    return 0;
}