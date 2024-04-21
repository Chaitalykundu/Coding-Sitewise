/*

Author : Chaitaly Kundu
Date : 19-07-2023

Problem name : 2057. Smallest Index With Equal Value

Problem link : https://leetcode.com/problems/smallest-index-with-equal-value/

Purpose : Crack Amazon interview

*/

class Solution
{
public:
    int smallestEqual(vector<int> &nums)
    {

        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (i % 10 == nums[i])
                return i;
        }
        return -1;
    }
};