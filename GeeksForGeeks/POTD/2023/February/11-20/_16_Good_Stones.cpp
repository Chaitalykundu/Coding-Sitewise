class Solution{
public:
    int dfs(vector<int>&vis,int i,vector<int>&arr){
        int n=arr.size();
        if(i<0 || i>=n)return 3;
        if(vis[i]!=0){
            if(vis[i]==1){
                return 2;
            }else return vis[i];
        }
        vis[i]=1;
        int x=dfs(vis,i+arr[i],arr);
        return vis[i]=x;
    }
    int goodStones(int n,vector<int> &arr){
        vector<int>vis(n);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(vis,i,arr);
            }
        }
        
        int cnt=0;
        for(int i=0;i<n;i++){
           cnt+=vis[i]==3;
        }
        return cnt;
    }  
};
