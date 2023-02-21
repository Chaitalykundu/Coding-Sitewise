class Solution{   
public:
    int minIteration(int N, int M, int x, int y){    
        // code here
        if (N == 1 and  M == 1)
            return 0;
        
        int ans = 0;
        int temp = abs(N - x) + abs(M - y);
        ans = max(ans, temp);
        temp = abs(1 - x) + abs(1 - y);
        ans = max(ans, temp);
        temp = abs(1 - x) + abs(M - y);
        ans = max(ans, temp);
        temp = abs(N - x) + abs(1 - y);
        ans = max(ans, temp);
        
        return ans;
    }
};
