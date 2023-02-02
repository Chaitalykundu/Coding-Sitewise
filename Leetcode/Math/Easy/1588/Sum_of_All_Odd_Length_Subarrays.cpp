class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n= arr.size();
        int sum=0, temp;
        
        for(int i=0;i<n;i++){
            temp = ((i+1)*(n-i)+1)/2;
            sum+= temp*arr[i];
        }
        return sum;
    }
};
