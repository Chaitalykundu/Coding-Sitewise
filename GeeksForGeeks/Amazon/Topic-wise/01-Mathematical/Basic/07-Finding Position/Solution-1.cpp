/*
Author : Chaitaly Kundu
Date : 15-03-2024

Problem name : Extract Maximum
Level : Basic


Problem link :
https://www.geeksforgeeks.org/problems/extract-maximum2943/1?page=1&category=Mathematical&company=Amazon&difficulty=Basic&sortBy=submissions

Purpose : Crack Amazon interview


Company tag : Amazon
Topic tag : Mathematical, Algorithms
*/

// T.C = O(log(n))

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int nthPosition(long long int n){
        // code here
        long long int m = 1;
        
        while(n>1){
            m = m * 2;
            n/=2;
        }
        return m;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;

        cin >> n;

        Solution ob;
        cout << ob.nthPosition(n) << endl;
    }
    return 0;
}