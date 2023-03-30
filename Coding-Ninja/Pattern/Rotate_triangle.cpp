// Problem statement link :  https://www.codingninjas.com/codestudio/problems/rotated-triangle_6573688?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTab=0

void nStarTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

/*  O/P:

*
**
***
****
*****
****
***
**
*


*/