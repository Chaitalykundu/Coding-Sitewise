/*
Author : Chaitaly Kundu
Date : 15-05-2023

Problem name : Arrays (Sum of array)

Problem link : https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-14805/1?page=1&difficulty[]=-2&category[]=CPP&sortBy=submissions
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int getSum(int a[], int n)
    {
        // Your code goes here
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        return sum;
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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.getSum(a, n) << endl;
    }

    return 0;
}