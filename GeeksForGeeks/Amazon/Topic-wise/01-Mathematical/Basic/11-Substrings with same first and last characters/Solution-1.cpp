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

using namespace std;

class Solution
{
public:
    int countSubstringWithEqualEnds(string s)
    {
        // Your code goes here

        int n = s.length();

        int count = n;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    count++;
                }
            }
        }

        return count;
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