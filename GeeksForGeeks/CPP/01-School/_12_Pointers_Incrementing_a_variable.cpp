/*
Author : Chaitaly Kundu
Date : 18-05-2023

Problem name : C++ Pointers ( Incrementing a variable) | Set 1
Problem link : https://practice.geeksforgeeks.org/problems/c-pointers-set-1introduction/1?page=1&difficulty[]=-2&category[]=CPP&sortBy=submissions

Related question on Leetcode :
*/

//{ Driver Code Starts
#include <iostream>
using namespace std;
void updateVar(int *a);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        updateVar(&a);
        cout << a << "\n";
    }
    return 0;
}
// } Driver Code Ends

/* This function is invoked by passing the address of the variable.
    You need to increment the value stored in the variable by 10 */

/* complete the function below */

void updateVar(int *a)
{
    // write your code here
    *a = *a + 10;
}