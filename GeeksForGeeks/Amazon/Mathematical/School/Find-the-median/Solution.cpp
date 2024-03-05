/*
Author : Chaitaly Kundu
Date : 25-02-2024

Problem name : Find the median
Level : School


Problem link :
https://www.geeksforgeeks.org/problems/find-the-median0527/1?page=1&category=Mathematical&company=Amazon&difficulty=School&sortBy=submissions

Purpose : Crack Amazon interview


Company tag : Accolite, Amazon, Samsung, FactSet
Topic tag : Mathematical, Divide and Conquer, Algorithms
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
public:
    int find_median(vector<int> v)
    {
        // Code here.

        sort(v.begin(), v.end());

        int n = v.size();

        if (n % 2 != 0) // if(n&1)
            return v[n / 2];
        else
            return (v[n / 2] + v[(n - 1) / 2]) / 2;
    }
};

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