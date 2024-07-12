/*
Author : Chaitaly Kundu
Date : 27-06-2024

Problem name : Sum of Series
Level : School
Avg Time : 3m 5s

Problem link :
https://www.geeksforgeeks.org/problems/sum-of-series2811/1?page=1&difficulty=School&sortBy=submissions


Purpose : Crack Amazon interview

Company tag : 
Topic tag : Mathematical

Process : Formula
T.C = O(1)
*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long seriesSum(int n) {
        // code here
        
        long long int res;
        
        res = ((long long)n * ((long long)n + 1))/2;
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        long long res = obj.seriesSum(n);

        cout << res << endl;
    }
}

// } Driver Code Ends
