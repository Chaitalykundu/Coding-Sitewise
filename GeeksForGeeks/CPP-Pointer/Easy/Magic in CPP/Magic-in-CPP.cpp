/*
Author : Chaitaly Kundu
Date : 24-01-2024

Problem name : Magic in CPP

Problem link : https://www.geeksforgeeks.org/problems/magic-in-cpp/1?page=1&category=cpp-pointers&difficulty=Easy&sortBy=submissions
*/

#include <iostream>

using namespace std;

// Function to swap A and B
// using pointers
void swap(int *A, int *B)
{

    // Your code here
    int temp;

    temp = *A;
    *A = *B;
    *B = temp;
}

// Function to swap A and B
// using reference
void swap(int &A, int &B)
{

    // Your code here
    int temp;
    temp = A;
    A = B;
    B = temp;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        // swapping by reference
        swap(a, b);
        cout << a << " " << b << endl;

        // swapping by pointer
        swap(&a, &b);
        cout << a << " " << b << endl;
    }
    return 0;
}