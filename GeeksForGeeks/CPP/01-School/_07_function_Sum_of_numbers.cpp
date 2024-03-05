/*
Author : Chaitaly Kundu
Date : 16-05-2023

Problem name : C++ Functions (Sum of numbers) | Set 1

Problem link : https://www.geeksforgeeks.org/problems/c-functions-set-1introduction/1?page=1&category=CPP,cpp-strings&difficulty=School&sortBy=submissions

Related question on Leetcode : https://leetcode.com/problems/two-sum/
*/

//{ Driver Code Starts
#include <iostream>
using namespace std;

int calcSum(int a, int b, int c);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = calcSum(a, b, c);
        cout << sum << "\n";
    }

    return 0;
}
// } Driver Code Ends

/*  Write your function here */

/* The function should be named calcSum
    and accepts three parameters of integer type
    and returns the sum of the three integers */

int calcSum(int a, int b, int c)
{
    // Your code here
    return a + b + c;
}