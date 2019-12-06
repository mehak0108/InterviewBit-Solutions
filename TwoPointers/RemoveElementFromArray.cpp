int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    int n = A.size();
    int ct=0;
    
    int i=0;
    while(i<n)
    {
        if(A[i]!=B)
        {
            // ct = i;
            swap(A[ct],A[i]);
            ct++;
            // n = A.size()-1;
        }
        i++;
        
    }
    
    return ct;
}