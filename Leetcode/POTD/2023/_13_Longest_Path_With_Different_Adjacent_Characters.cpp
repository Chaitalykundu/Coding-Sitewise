class Solution {
public:
    
int fans = 1;

    void dfs(int node,string &s,vector<int>&ans,vector<vector<int>>&adj){

        ans[node] = 1;

        for(int i = 0;i < adj[node].size();i++){

            dfs(adj[node][i],s,ans,adj);

            if(s[node] != s[adj[node][i]]){

                fans = max(fans,ans[node] + ans[adj[node][i]]);

                ans[node] = max(ans[node],ans[adj[node][i]] + 1);

            }

        }        

    }

    int longestPath(vector<int>& parent, string s) {

        int n = parent.size();

        vector<vector<int>>adj(n,vector<int>());

        for(int i = 0;i < n;i++){

            if(parent[i] != -1){

                adj[parent[i]].push_back(i);

            }

        }

        vector<int>ans(n);

        dfs(0,s,ans,adj);

        return fans;
    }
};
