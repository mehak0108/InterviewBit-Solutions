int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    int n=A.size();
    
    int i=0,j=1;
    while(i<n && j<n)
    {
        if(A[i]==A[j])
        {
            A[j]=INT_MAX-1;
            j++;
        }
        else
        {
            i=j;
            j++;
        }
    }
    
    sort(A.begin(),A.end());
    
    int k=n-1;
    while(k>=0 && A[k]==INT_MAX-1)
    {
        A.pop_back();
        k--;
    }
    
    return A.size();
    
}