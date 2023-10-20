/*

Author : Chaitaly Kundu
Date : 19-07-2023

Problem name : Value equal to index value
Level : School


Problem link :
https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1?page=1&difficulty[]=-2&company[]=Amazon&sortBy=submissions

Purpose : Crack Amazon interview

*/

#include <bits/stdc++.h>

using namespace std;

// User function template for C++
class Solution
{
public:
    vector<int> valueEqualToIndex(int arr[], int n)
    {
        // code here
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 == arr[i])
            {
                v.push_back(arr[i]);
            }
        }
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty())
        {
            cout << "Not Found";
        }
        else
        {
            for (int x : ans)
            {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
