class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      // code here
      vector<int> ans(N , 0);
    for(int i=0; i < N; i++){
        if(Edge[i] != -1) ans[Edge[i]] += i;
    }
    return max_element(ans.begin(), ans.end()) - ans.begin();
  }
};
