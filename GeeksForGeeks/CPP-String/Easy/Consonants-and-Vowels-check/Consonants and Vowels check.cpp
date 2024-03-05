/*
Author : Chaitaly Kundu
Date : 21-12-2023

Problem name : Consonants and Vowels check

Problem link : https://www.geeksforgeeks.org/problems/consonants-and-vowels-check/1?page=1&category=cpp-strings&difficulty=Easy&sortBy=submissions
*/

#include <iostream>
#include <string>
using namespace std;

void checkString(string s)
{
    int v = 0;
    int c = 0;

    // Your code here
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            v++;
        else if (s[i] == ' ')
            continue;
        else
            c++;
    }

    if (v > c)
        cout << "Yes";
    else if (c > v)
        cout << "No";
    else
        cout << "Same";

    cout << endl;
}

int main()
{

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        checkString(s);
    }

    return 0;
}