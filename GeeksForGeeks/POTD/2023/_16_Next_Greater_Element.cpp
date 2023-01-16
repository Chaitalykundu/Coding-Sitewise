class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        stack<long long>st;
        vector<long long>v(n,-1);
        for(int i=0;i<n;i++){
            
             
            while(!st.empty() and arr[i]>arr[st.top()]){
                    v[st.top()]=arr[i];
                    st.pop();
                }
               
            st.push(i);
        }
        return v;
    }
};
