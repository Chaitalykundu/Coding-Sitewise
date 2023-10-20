/*
Author : Chaitaly Kundu
Date : 18-05-2023

Problem name : C++ Switch Case Statement
Problem link : https://practice.geeksforgeeks.org/problems/c-switch-case-statement5900/1?page=1&difficulty[]=-2&category[]=CPP&sortBy=submissions

Related question on Leetcode : https://leetcode.com/problems/robot-return-to-origin/
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string isInRange(int N)
    {
        // code here

        switch (N)
        {
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        case 10:
            return "ten";
        default:
            return "not in range";
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isInRange(N) << endl;
    }
    return 0;
}
// } Driver Code Ends