class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        
        double k,f;
        k = celsius + 273.15;
        ans.push_back(k);
        f = celsius * 1.80 + 32.00;
        ans.push_back(f);
        return ans;
        
        // alternative
        // return {celsius + 273.15, celsius * 1.80 + 32.00};
        
    }
};
