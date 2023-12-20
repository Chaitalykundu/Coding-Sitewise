/*
Author : Chaitaly Kundu
Date : 19-12-2023

Problem name : While loop- printTable

Problem link : https://www.geeksforgeeks.org/problems/while-loop-printtable/1?page=1&category=CPP-Control-Flow&difficulty=Easy&sortBy=submissions
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    void printTable(int n)
    {
        int multiplier = 10;
        while (multiplier)
        {
            // Your code here
            cout << n * multiplier << " ";
            multiplier--;
        }

        cout << endl;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution obj;
        obj.printTable(n);
    }
    return 0;
} // } Driver Code Ends