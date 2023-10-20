/*
Author : Chaitaly Kundu
Date : 15-05-2023

Problem name : C++ Array (print an element) | Set 2

Problem link : https://practice.geeksforgeeks.org/problems/c-array-print-an-element-set-25933/1?page=1&difficulty[]=-2&category[]=CPP&sortBy=submissions
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int findElementAtIndex(int a[], int n, int key)
    {
        // Your code goes here
        return a[key];
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, key;
        cin >> n >> key;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.findElementAtIndex(a, n, key) << endl;
    }

    return 0;
}