/*
Author : Chaitaly Kundu
Date : 15-05-2023

Problem name : C++ if-else (Decision Making)

Problem link : https://practice.geeksforgeeks.org/problems/c-if-else-decision-making4138/1?page=1&difficulty[]=-2&category[]=CPP&sortBy=submissions
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string compareFive(int n)
    {
        // code here
        if (n > 5)
            return "Greater than 5";
        else if (n < 5)
            return "Less than 5";
        else
            return "Equal to 5";
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.compareFive(N) << endl;
    }
    return 0;
}