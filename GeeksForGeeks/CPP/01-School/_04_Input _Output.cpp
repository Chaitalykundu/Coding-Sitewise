/*
Author : Chaitaly Kundu
Date : 15-05-2023

Problem name : C++ Input / Output

Problem link : https://practice.geeksforgeeks.org/problems/c-input-output2432/1?page=1&difficulty[]=-2&category[]=CPP&sortBy=submissions
*/

#include <iostream>

using namespace std;

class Solution
{
public:
    int multiplication(int A, int B)
    {
        // code here

        return A * B;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.multiplication(A, B) << endl;
    }
    return 0;
}