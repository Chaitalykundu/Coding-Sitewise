class Solution {
  public:
    int removeStudents(int H[], int N) {
        // code here
        vector<int> res;

        for(int i=0; i<N; i++) {
            auto it = std::lower_bound(res.begin(), res.end(), H[i]); 
            if(it==res.end()) 
              res.push_back(H[i]);
            else 
              *it = H[i];
        }
        return N-res.size();
    }
};
