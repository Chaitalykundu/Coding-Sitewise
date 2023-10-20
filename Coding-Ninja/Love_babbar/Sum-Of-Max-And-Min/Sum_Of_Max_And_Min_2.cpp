// Problem link : https://www.codingninjas.com/codestudio/problems/sum-of-max-and-min_1081476?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

#include <bits/stdc++.h>
int sumOfMaxMin(int arr[], int n)
{
    // Write your code here.

    int maxi = *max_element(arr, arr + n);
    int mini = *min_element(arr, arr + n);

    return maxi + mini;
}