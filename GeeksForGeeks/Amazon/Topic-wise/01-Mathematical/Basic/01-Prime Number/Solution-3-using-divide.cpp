/*
Author : Chaitaly Kundu
Date : 14-03-2024

Problem name : Prime Number
Level : Basic


Problem link :
https://www.geeksforgeeks.org/problems/prime-number2314/1?page=1&category=Mathematical&company=Amazon&difficulty=Basic&sortBy=submissions

Purpose : Crack Amazon interview


Company tag : Amazon, VMWare, SAP Labs
Topic tag : Mathematical, Prime Numbers, Algorithms
*/


// T.C = O(n)


#include <iostream>
#include<cmath>

using namespace std;

class Solution
{
public:
    int isPrime(int n)
    {
        if(n<=1)
            return 0;
            
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        Solution ob;

        cout << ob.isPrime(n) << endl;
    }
}