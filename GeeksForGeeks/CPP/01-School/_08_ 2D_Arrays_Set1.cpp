/*
Author : Chaitaly Kundu
Date : 17-05-2023

Problem name : C++ 2-D Arrays | Set-1

Problem link : https://practice.geeksforgeeks.org/problems/c-2-d-arrays0708/1?page=1&difficulty[]=-2&category[]=CPP&sortBy=submissions

Related question on Leetcode :
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define M 101

vector<vector<int>> transpose(int a[][M], int n);

int main()
{
    int t;
    cin >> t;
    int a[M][M];
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<vector<int>> b;
        b = transpose(a, n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << b[i][j] << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends

vector<vector<int>> transpose(int a[][M], int n)
{
    // Code here

    if (n == 0)
    {
        return {{}};
    }
    int row = n;
    int col = n;
    vector<vector<int>> v(n, vector<int>(row));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            v[j][i] = a[i][j];
        }
    }

    return v;
}
