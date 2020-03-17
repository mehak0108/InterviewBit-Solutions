#include <vector>
vector<int>v,aux;
MinStack::MinStack() {
    
    // int top;
    v.clear();
    aux.clear();
    
}
 
void MinStack::push(int x) {
    
    v.push_back(x);
    if(aux.size()!=0)
        aux.push_back(min(x,aux[aux.size()-1]));
    else
        aux.push_back(x);
}
 
void MinStack::pop() {
    
    if(v.size()==0)
        return;
    v.pop_back();
    aux.pop_back();
}
 
int MinStack::top() {
    
    if(v.size()==0)
        return -1;
    return v[v.size()-1];
}
 
int MinStack::getMin() {
    
    // int ans=INT_MAX;
    
    // for(int i=0;i<v.size();i++)
    // {
    //     ans = min(ans,v[i]);
    // }
    // if(ans==INT_MAX)
        // return -1;
    if(aux.size()==0)
        return -1;
    return aux[aux.size()-1];
}
 