void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    int n = A.size(), m = B.size();
    
    for(int i=0;i<m;i++)
        A.push_back(B[i]);
    
    sort(A.begin(),A.end());
    
    
}