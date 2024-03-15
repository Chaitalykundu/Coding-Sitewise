/*
Author : Chaitaly Kundu
Date : 14-03-2024

Problem name : Angle between hour and minute hand
Level : Basic


Problem link :
https://www.geeksforgeeks.org/problems/angle-between-hour-and-minute-hand0545/1?page=1&category=Mathematical&company=Amazon&difficulty=Basic&sortBy=submissions

Purpose : Crack Amazon interview


Company tag : Paytm, Amazon, Salesforce, Infinera
Topic tag : Mathematical, Algorithms
*/

// T.C = O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getAngle(int H, int M)
    {
        if (M == 60)
        {
            M = 0;
        }

        // Calculate the angles moved by hour and minute hands with reference to 12:00
        float hour_angle = 0.5 * (H * 60 + M);
        float minute_angle = 6 * M;

        // Find the difference between two angles
        float angle = abs(hour_angle - minute_angle);

        // Return the smaller angle of two possible angles
        angle = min(360 - angle, angle);

        return angle;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int H, M;

        cin >> H >> M;

        Solution ob;
        cout << ob.getAngle(H, M) << endl;
    }
    return 0;
}
