/*
Author : Chaitaly Kundu
Date : 14-03-2024

Problem name : Replace all 0's with 5
Level : Basic


Problem link :
https://www.geeksforgeeks.org/problems/replace-all-0-with-5-in-an-input-integer/1?page=1&category=Mathematical&company=Amazon&difficulty=Basic&sortBy=submissions

Purpose : Crack Amazon interview


Company tag : Amazon, VMWare, SAP Labs
Topic tag : Mathematical, Prime Numbers, Algorithms
*/


// T.C = O(n)

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int convertFive(int n)
    {
    //Your code here
    
        int d, num=0, i=1;
        while(n>0)
        {
            d = n % 10;
            if(d == 0)
                d=5;
            
            num = num + d * i;
            n = n/10;
            i*=10;
        }
        return num;
	}
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
} 