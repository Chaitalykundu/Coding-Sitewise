/*
Author : Chaitaly Kundu
Date : 20-12-2023

Problem name : Logical Operators


Problem link : https://www.geeksforgeeks.org/problems/logical-operators/1?page=1&category=cpp-operator&sortBy=submissions
*/

#include <iostream>
using namespace std;

void logicOp(int a, int b)
{
    cout << (a && b) << " " << (a || b) << " " << ((!a) && (!b));
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        logicOp(a, b);
    }
}