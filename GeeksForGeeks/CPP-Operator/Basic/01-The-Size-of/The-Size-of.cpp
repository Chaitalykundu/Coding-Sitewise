/*
Author : Chaitaly Kundu
Date : 20-12-2023

Problem name : The Size of

Problem link : https://www.geeksforgeeks.org/problems/the-size-of/1?page=1&category=cpp-operator&sortBy=submissions
*/

#include <iostream>
using namespace std;

void dataTypes(int a, float b, double c, long long l, string d)
{

    float x = b / c;
    double y = b / a;
    int z = c / a;
    long long m = z / l;

    cout << sizeof(x) << " " << sizeof(y) << " " << sizeof(z) << " " << sizeof(m) << endl;

    cout << sizeof(d) << " " << sizeof(d[3]) << endl;
}

int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;

    int t;
    cin >> t;

    while (t--)
    {

        cin >> a >> b >> c >> l >> d;

        dataTypes(a, b, c, l, d);
    }

    return 0;
}