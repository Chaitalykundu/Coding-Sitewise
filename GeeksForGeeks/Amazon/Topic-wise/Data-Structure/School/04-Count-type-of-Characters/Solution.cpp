/*
Author : Chaitaly Kundu
Date : 13-03-2024

Problem name : Count type of Characters
Level : School

Problem link :
https://www.geeksforgeeks.org/problems/count-type-of-characters3635/1?page=1&company=Amazon&difficulty=School&sortBy=submissions

Purpose : Crack Amazon interview

Company tag : Amazon, MakeMyTrip
Topic tag : Strings, Data Structures
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> count(string s)
    {
        // code here.

        int n = s.size();

        vector<int> v;

        int uppercase = 0, lowercase = 0, special_char = 0, number = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                uppercase++;
            else if (s[i] >= 97 && s[i] <= 122)
                lowercase++;
            else if (s[i] >= 48 && s[i] <= 57)
                number++;
            else
                special_char++;
        }

        v.push_back(uppercase);
        v.push_back(lowercase);
        v.push_back(number);
        v.push_back(special_char);

        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        vector<int> res = ob.count(s);
        for (int i : res)
            cout << i << '\n';
    }
}
