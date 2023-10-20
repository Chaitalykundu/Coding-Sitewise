/*
Problem Statement : Swap Two Numbers

Problem Link : https://www.codingninjas.com/studio/problems/swap-two-numbers_1112577?leftPanelTab=0

*/

void swapNumber(int &a, int &b)
{
    // Write your code here.

    a = a + b;
    b = a - b;
    a = a - b;
}