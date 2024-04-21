/*
Author : Chaitaly Kundu
Date : 18-03-2024

Problem name : Pairs of prime number
Level : Basic


Problem link :
https://www.geeksforgeeks.org/problems/pairs-of-prime-number2612/1?page=1&category=Mathematical&company=Amazon&difficulty=Basic&sortBy=submissions

Purpose : Crack Amazon interview


Company tag : Amazon
Topic tag : Mathematical, Algorithms
*/

// T.C. : O(n^2* sqrt(n))

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Solution
{
public:
    int primechecker(int n)
    {
        if (n <= 1)
            return 0;

        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }

    vector<int> prime_pairs(int n)
    {
        vector<int> ans;
        for (int i = 2; i <= n / 2; i++)
        {
            for (int j = 2; j <= n / 2; j++)
            {
                if (primechecker(i) && primechecker(j) && i * j <= n)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
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

        vector<int> ans = ob.prime_pairs(n);

        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
}