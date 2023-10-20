/*
Author : Chaitaly Kundu
Date : 31-09-2023

Problem name : At least two greater elements
Level : School

Problem link :
https://practice.geeksforgeeks.org/problems/at-least-two-greater-elements4625/1?page=1&difficulty[]=-2&company[]=Amazon&category[]=Arrays&sortBy=submissions

Purpose : Crack Amazon interview

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here
        vector<int> v;
        sort(a, a + n);

        for (int i = 0; i < n - 2; i++)
        {
            v.push_back(a[i]);
        }
        return v;
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
        vector<int> res = ob.findElements(a, n);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}
