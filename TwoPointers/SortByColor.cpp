void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    int ct1=0,ct2=0,ct0=0;
    
    int n = A.size();
    
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)
            ct0++;
        else if(A[i]==1)
            ct1++;
        else
            ct2++;
    }
    
    int i=0;
    while(ct0)
    {
        A[i]=0;
        ct0--;
        i++;
    }
    
    while(ct1)
    {
        A[i]=1;
        ct1--;
        i++;
    }
    
    while(ct2)
    {
        A[i]=2;
        ct2--;
        i++;
    }
}