class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        
        int zeros=0, ones=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0)
                zeros++;
            else
                ones++;
        }
        
        for(int i=0;i<zeros;i++)
            arr[i] = 0;
        for(int i=zeros;i<zeros+ones;i++)
            arr[i] = 1;
    }
};
