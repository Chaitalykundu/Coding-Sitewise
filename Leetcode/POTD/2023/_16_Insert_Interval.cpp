class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& f) {
        map<int, int> maps;
        for (auto& v : intervals) {
            maps[v[1]] = v[0];
        }
        int l = f[0], r = f[1];
        auto it = maps.lower_bound(f[0]);
        while (it != maps.end()) {
            if (it->second > r) {
                break;
            }
            l = min(l, it->second);
            r = max(r, it->first);
            maps.erase(it++);
        }
        maps[r] = l;
        vector<vector<int>> ans;
        for (auto& it : maps) {
            ans.push_back({it.second, it.first});
        }
        return ans;
    }
};
