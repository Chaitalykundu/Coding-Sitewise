/*
Author : Chaitaly Kundu
Date : 19-12-2023

Problem name : Step by Step Condition

Problem link : https://www.geeksforgeeks.org/problems/step-by-step-condition/1?page=1&category=CPP-Control-Flow&sortBy=submissions
*/

#include <iostream>
using namespace std;

void isDivisibleByPrime(int n)
{

    // Your code here
    if (n % 11 == 0)
        cout << "Eleven" << endl;
    else if (n % 3 == 0)
        cout << "Three" << endl;
    else if (n % 2 == 0)
        cout << "Two" << endl;
    else
        cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        isDivisibleByPrime(n);
    }
}