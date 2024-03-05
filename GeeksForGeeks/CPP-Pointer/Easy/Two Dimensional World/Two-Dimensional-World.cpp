/*
Author : Chaitaly Kundu
Date : 24-01-2024

Problem name : Two Dimensional World

Problem link : https://www.geeksforgeeks.org/problems/two-dimensional-world/1?page=1&category=cpp-pointers&sortBy=submissions
*/

#include <iostream>

using namespace std;

void twoDimensional(int **a, int N)
{

    // Loop to iterate through matrix
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {

            // Your code here
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        /* code */
        int n;
        cin >> n;

        int **a;

        a = new int *[n];

        for (int i = 0; i < n; i++)
        {
            a[i] = new int[n];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                // Your code here
                cin >> a[i][j];
            }
        }

        twoDimensional(a, n);
    }
}