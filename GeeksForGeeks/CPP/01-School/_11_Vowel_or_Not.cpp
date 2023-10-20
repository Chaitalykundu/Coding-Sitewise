/*
Author : Chaitaly Kundu
Date : 18-05-2023

Problem name : Vowel or Not
Problem link : https://practice.geeksforgeeks.org/problems/vowel-or-not0831/1?page=1&difficulty[]=-2&category[]=CPP&sortBy=submissions

Related question on Leetcode :
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string isVowel(char c)
    {
        // code here

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return "YES";
        return "NO";
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        Solution ob;
        cout << ob.isVowel(c) << endl;
    }
    return 0;
}
// } Driver Code Ends