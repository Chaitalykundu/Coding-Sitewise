/*

Author : Chaitaly Kundu
Date : 19-07-2023

Problem name : Find the median
Level : School


Problem link :
https://practice.geeksforgeeks.org/problems/find-the-median0527/1?page=1&difficulty[]=-2&company[]=Amazon&sortBy=submissions

Purpose : Crack Amazon interview

*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int find_median(vector<int> v)
    {
        // Code here.
        sort(v.begin(), v.end());

        int n = v.size();

        if (n & 1)
            return v[n / 2];
        else
            return (v[n / 2] + v[n / 2 - 1]) / 2;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        Solution ob;
        int ans = ob.find_median(v);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends