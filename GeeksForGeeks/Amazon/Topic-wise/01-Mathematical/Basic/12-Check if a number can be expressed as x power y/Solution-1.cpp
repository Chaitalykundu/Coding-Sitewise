/*
Author : Chaitaly Kundu
Date : 18-03-2024

Problem name : Check if a number can be expressed as x^y
Level : Basic


Problem link :
https://www.geeksforgeeks.org/problems/check-if-a-number-can-be-expressed-as-xy1606/1?page=1&category=Mathematical&company=Amazon&difficulty=Basic&sortBy=submissions

Purpose : Crack Amazon interview


Company tag : Amazon, Housing.com
Topic tag : Mathematical, Algorithms
*/

// T.C. :O(n^2)

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Solution
{
public:
    int checkPower(int N)
    {
        // code here

        if (N == 1 || N == 0)
            return 1;

        for (int x = 2; x <= N; x++)
        { // Or, for(int x=2;x<=N/2;x++){
            for (int y = 2; y <= N; y++)
            {
                if (pow(x, y) == N)
                    return 1;
                else if (pow(x, y) > N)
                    break;
            }
        }
        return 0;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        Solution ob;

        cout << ob.checkPower(n) << endl;
    }
}