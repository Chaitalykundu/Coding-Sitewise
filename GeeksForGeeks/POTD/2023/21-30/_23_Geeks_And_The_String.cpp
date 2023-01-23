class Solution {
  public:
    string removePair(string s) {
        // code here
        string ans;
        for(int i=0; i<s.size(); i++){
            if(ans.size()!=0 && ans.back()==s[i]) ans.pop_back();
            else ans.push_back(s[i]);
        }
        if(ans.size()==0) return "-1";
        return ans;
    }
};
