/*
Author : Chaitaly Kundu
Date : 15-03-2024

Problem name : Maximum money
Level : Basic


Problem link :
https://www.geeksforgeeks.org/problems/maximum-money2855/1?page=1&category=Mathematical&company=Amazon&difficulty=Basic&sortBy=submissions

Purpose : Crack Amazon interview


Company tag : Amazon
Topic tag : Mathematical, Algorithms
*/


// T.C = O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maximizeMoney(int N , int K) {
        // code here
        int max_money;
        max_money = ((N+1)/2) * K;
        return max_money;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;

        cin>>N>>K;

        Solution ob;
        cout << ob.maximizeMoney(N,K) << endl;
    }
    return 0;
} 