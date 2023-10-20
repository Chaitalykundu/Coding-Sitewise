/*
Author : Chaitaly Kundu
Date : 15-05-2023

Problem name : Addition of Two Numbers

Problem link : https://practice.geeksforgeeks.org/problems/addition-of-two-numbers0812/1?page=1&difficulty[]=-2&category[]=CPP&sortBy=submissions
*/

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int addition(int A, int B)
    {
        // code here
        return A + B;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addition(A, B) << endl;
    }
    return 0;
}
// } Driver Code Ends