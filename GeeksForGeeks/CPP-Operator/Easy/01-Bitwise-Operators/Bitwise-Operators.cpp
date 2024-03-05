/*
Author : Chaitaly Kundu
Date : 20-12-2023

Problem name : Bitwise Operators

Problem link : https://www.geeksforgeeks.org/problems/bitwise-operators/1?page=1&category=cpp-operator&sortBy=submissions
*/

#include <iostream>
using namespace std;

// Function Prototype
void bitWiseOperation(int, int, int);

void bitWiseOperation(int a, int b, int c)
{

    int d, e, f, g, h;

    d = a ^ a;
    e = c ^ b;
    f = a & b;
    g = c | d;
    h = ~e;

    cout << d << "\n"
         << e << "\n"
         << f << "\n"
         << g << "\n"
         << h << endl;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        bitWiseOperation(a, b, c);
    }

    return 0;
}