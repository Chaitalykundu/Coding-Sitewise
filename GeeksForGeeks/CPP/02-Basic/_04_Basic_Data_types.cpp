/*
Author : Chaitaly Kundu
Date : 07-06-2023

Problem name : C++ Basic Data types

Problem link : https://practice.geeksforgeeks.org/problems/start-coding/1?page=1&difficulty[]=-1&category[]=CPP&sortBy=submissions

*/

#include <iostream>

using namespace std;

// User function template for C++

class Solution
{
public:
    int BasicDataType(string s)
    {
        // code here

        int len = s.length(), size;
        if (len == 1)
        {
            if (isdigit(s[0]))
                size = 4;
            else
                size = 1;
        }
        else
        {
            int flag = 0;
            for (int i = 0; i < len; i++)
            {
                if (s[i] == '.')
                {
                    flag = 1;
                    int j = len - i + 1;
                    if (j > 7)
                        size = 8;
                    else
                        size = 4;
                }
            }
            if (!flag)
                size = 4;
        }
        return size;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.BasicDataType(str) << "\n";
    }
    return 0;
}
// } Driver Code Ends