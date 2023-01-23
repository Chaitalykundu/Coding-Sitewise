class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int len = trust.size();
        
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        vector<int> arr1(n+1);
        vector<int>arr2(n+1);
        
        for(int i=0;i<len;i++){
            arr1[trust[i][0]]++;
            arr2[trust[i][1]]++;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(arr1[i]==0 && arr2[i]==n-1)
                return i;
        }
        return -1;
    }
};
