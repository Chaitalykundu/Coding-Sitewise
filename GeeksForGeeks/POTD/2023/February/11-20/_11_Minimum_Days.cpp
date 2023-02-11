class Solution {
  public:
    int getMinimumDays(int n, string s, vector<int> &p)
    {
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[p[i]] = i + 1;
        }
        int mx = 0;
        int mi;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                mi = min(m[i], m[i - 1]);
                mx = max(mx, mi);
            }
        }
        return mx;
    }
};
