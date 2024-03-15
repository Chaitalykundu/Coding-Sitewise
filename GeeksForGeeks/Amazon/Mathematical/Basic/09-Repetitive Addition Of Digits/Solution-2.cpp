/*
Author : Chaitaly Kundu
Date : 15-03-2024

Problem name : Repetitive Addition Of Digits

Level : Basic


Problem link :
https://www.geeksforgeeks.org/problems/repetitive-addition-of-digits2221/1?page=1&category=Mathematical&company=Amazon&difficulty=Basic&sortBy=submissions

Purpose : Crack Amazon interview


Company tag : Amazon
Topic tag : Mathematical, Algorithms
*/


// T.C. = O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleDigit(long long N)
    {

        if (N <= 9)
            return N;
        else if (N % 9 == 0)
            return 9;
        else
            return (N % 9);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        int ans = ob.singleDigit(N);
        cout << ans << endl;
    }
    return 0;
}