/*
Author : Chaitaly Kundu
Date : 18-03-2024

Problem name : Half N by M
Level : Basic


Problem link :
https://www.geeksforgeeks.org/problems/geek-and-coffee-shop5721/1?page=1&category=Mathematical&company=Amazon&difficulty=Basic&sortBy=submissions

Purpose : Crack Amazon interview


Company tag : Amazon
Topic tag : Mathematical, Algorithms
*/

// T.C = O(M)




#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int mthHalf(int N, int M){
        int i ;
        for(i = 1; i<=M-1 ; i++)
        {
            N = N / 2;
        }
        return N;
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        
        Solution ob;
        cout<<ob.mthHalf(N, M)<<"\n";
    }
    return 0;
}