/*
Author : Chaitaly Kundu
Date : 18-05-2023

Problem name : C++ Data Types
Problem link : https://practice.geeksforgeeks.org/problems/c-data-types1523/1?page=1&difficulty[]=-2&category[]=CPP&sortBy=submissions

Related question on Leetcode :
*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cppIntType() {
        // code here
        int a;
        cin >> a;
        return a;
    }
    
    char cppCharType() {
        // code here
        char c;
        cin >> c;
        return c;
    }
    
    float cppFloatType() {
        // code here
        
        float f;
        cin >> f;
        return f;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    }
    return 0;
}
// } Driver Code Ends