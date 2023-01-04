class Solution {
  public:
    static bool mycmp(vector<int> a,vector<int> b)
    {
        if(a[0] == b[0])
        {
            if(a[1]==b[1])
                return a[2]>b[2];
            return a[1]<b[1];
        }
        return a[0]<b[0];
    }
    
    int maximum_profit(int n, vector<vector<int>> &inter) 
    {
        sort(inter.begin(),inter.end(),mycmp);
        
        vector<int> dp(n,0);
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            dp[i] = inter[i][2];
            int prv_profit=0;
            for(int j=i-1;j>=0;j--)
            {
                if(inter[i][0]>=inter[j][1])
                prv_profit = max(prv_profit, dp[j]);
            }
            dp[i]+=prv_profit;
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};
