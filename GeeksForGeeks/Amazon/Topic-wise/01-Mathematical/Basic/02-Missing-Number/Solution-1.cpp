/*
Author : Chaitaly Kundu
Date : 14-03-2024

Problem name : Missing Number
Level : Basic


Problem link :
https://www.geeksforgeeks.org/problems/missing-number4257/1?page=1&category=Mathematical&company=Amazon&difficulty=Basic&sortBy=submissions

Purpose : Crack Amazon interview


Company tag : Amazon, VMWare, SAP Labs
Topic tag : Mathematical, Prime Numbers, Algorithms
*/


// T.C = O(n)

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int missingNumber( int arr[],int n) {
        
        int actualSum = (n*(n+1))/2; 
        
        int sum=0;
        
        for(int i=0;i<n-1;i++){
            sum+=arr[i];
        }
        
        return actualSum - sum;
    }
};


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];

		Solution ob;

		cout<<ob.missingNumber(a, n)<<endl;
	}
}
