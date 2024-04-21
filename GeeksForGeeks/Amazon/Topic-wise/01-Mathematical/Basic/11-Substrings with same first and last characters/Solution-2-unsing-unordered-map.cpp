/*
Author : Chaitaly Kundu
Date : 18-03-2024


Problem name : Substrings with same first and last characters
Level : Basic


Problem link :
https://www.geeksforgeeks.org/problems/substrings-with-similar-first-and-last-characters3644/1?page=1&category=Mathematical&company=Amazon&difficulty=Basic&sortBy=submissions


Purpose : Crack Amazon interview

Company tag : Amazon, Housing.com
Topic tag : Hash, Strings, Mathematical, Data Structures, Algorithms

*/

// T.C. :O(n^2)

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int countSubstringWithEqualEnds(string s)
    {
        // Your code goes here

        unordered_map<char, int> un;
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            un[s[i]]++;
            ans += un[s[i]] - 1;
        }
        return ans + s.length();
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.countSubstringWithEqualEnds(str) << endl;
    }
    return 0;
}