class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,int>mpp;
        string temp1 = "",temp2 = "";
        for(int i = 0;i < pattern.size();i++){
            if(mpp.find(pattern[i]) != mpp.end()){
                temp1 += to_string(mpp[pattern[i]]);
            }
            else{
                temp1 += to_string((mpp.size() + 1));
                mpp[pattern[i]] = mpp.size() + 1;
            }
        }
        map<string,int>mpp2;
        vector<string>arr2;
        string temp = "";
        for(int i = 0;i < s.length();i++){
            if(s[i] == ' '){
                arr2.push_back(temp);
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        arr2.push_back(temp);
        for(int i = 0;i < arr2.size();i++){
            if(mpp2.find(arr2[i]) != mpp2.end()){
                temp2 += to_string(mpp2[arr2[i]]);
            }
            else{
                temp2 += to_string((mpp2.size() + 1));
                mpp2[arr2[i]] = mpp2.size() + 1;
            }
        }
        if(temp1 == temp2)return true;
        return false;
       
    }
};
