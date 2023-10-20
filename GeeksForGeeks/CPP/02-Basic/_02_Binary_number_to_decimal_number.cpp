/*
Author : Chaitaly Kundu
Date : 19-05-2023

Problem name : Binary number to decimal number

Problem link : https://practice.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1?page=1&difficulty[]=-1&category[]=CPP&sortBy=submissions

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int binary_to_decimal(string str)
    {
        // Code here.

        int n = str.length();

        int decimal = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (str[i] == '1')
            {
                decimal += pow(2, n - 1 - i);
            }
        }
        return decimal;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends