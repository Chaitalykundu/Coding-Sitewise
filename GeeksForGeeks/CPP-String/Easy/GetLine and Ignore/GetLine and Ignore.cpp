/*
Author : Chaitaly Kundu
Date : 21-12-2023

Problem name : Consonants and Vowels check

Problem link : https://www.geeksforgeeks.org/problems/consonants-and-vowels-check/1?page=1&category=cpp-strings&difficulty=Easy&sortBy=submissions
*/

#include <iostream>
#include <string>
using namespace std;

void getLineAndIgnore()
{

    string a, d;
    int b;

    // Your code here
    getline(cin, a);
    std::cin >> b;
    cin.ignore();
    getline(cin, d);

    cout << a << endl;

    cout << b << endl;

    cout << d << endl;
}

int main()
{

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        getLineAndIgnore();
    }

    return 0;
}