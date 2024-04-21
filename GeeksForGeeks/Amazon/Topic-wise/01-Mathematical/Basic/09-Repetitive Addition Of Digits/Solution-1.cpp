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




#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:

    int sum_of_digits(long long N)
    {
        long long int sum = 0;
        while(N>0)
        {
            int d = N %10;
            sum = sum + d;
            N/=10;
        }
        return sum;
    }
    int singleDigit(long long N)
    {
        // Write Your Code here
        
        long long int sum = sum_of_digits(N);
        if(N<10)
            return N;
        if(sum>=10)
            return singleDigit(sum_of_digits(N)) ;
        
            
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        int ans  = ob.singleDigit(N);
        cout<<ans<<endl;
    }
    return 0;
}  // } Driver Code Ends