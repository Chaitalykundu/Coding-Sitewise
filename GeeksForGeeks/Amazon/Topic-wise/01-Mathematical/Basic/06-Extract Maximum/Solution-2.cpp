/*
Author : Chaitaly Kundu
Date : 15-03-2024

Problem name : Extract Maximum
Level : Basic


Problem link :
https://www.geeksforgeeks.org/problems/extract-maximum2943/1?page=1&category=Mathematical&company=Amazon&difficulty=Basic&sortBy=submissions

Purpose : Crack Amazon interview


Company tag : Amazon
Topic tag : Mathematical, Algorithms
*/

// T.C = O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int extractMaximum(string S)
    {
        // code here.
        int n = S.length();
        int ans = -1, num, sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (S[i] - '0' >= 0 && S[i] - '0' <= 9)
            {
                num = S[i] - '0';
                sum = sum * 10 + num;
                ans = max(sum, ans);
            }
            else
                sum = 0;
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;

        cin >> s;

        Solution ob;
        cout << ob.extractMaximum(s) << endl;
    }
    return 0;
}