class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        long long int ans = 0;
        sort(arr.begin(), arr.end());
        for(int i = 1;i<N;i++) {
            if(arr[i-1] >= arr[i]) {
                int x = arr[i-1] - arr[i] + 1;
                ans += x;
                arr[i] += x;
            }
        }
        return ans;
    }
};
