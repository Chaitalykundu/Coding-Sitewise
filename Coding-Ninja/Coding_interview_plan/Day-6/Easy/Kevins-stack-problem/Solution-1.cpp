/*

Prolem Statement : Kevin’s stack problem

 Problem Link : https://www.codingninjas.com/studio/problems/kevin-s-stack-problem_1169465?leftPanelTab=0

*/
#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
    // Write your code here.
    int n = s.length();

    char ch = ' ';
    if (n == 1)
        return s;
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            ch = s[i];
            s[i] = s[n - i - 1];
            s[n - i - 1] = ch;
        }
        return s;
    }
}
