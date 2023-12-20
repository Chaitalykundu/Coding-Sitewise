/*
Author : Chaitaly Kundu
Date : 19-12-2023

Problem name : While loop- printTable

Problem link : https://www.geeksforgeeks.org/problems/while-loop-printtable/1?page=1&category=CPP-Control-Flow&difficulty=Easy&sortBy=submissions
*/

#include <iostream>
#include <cmath>
using namespace std;

string isPrime(int n)
{

    if (n == 1)
        return "No";

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return "No";
        }
    }
    return "Yes";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << isPrime(n) << endl;
    }
}