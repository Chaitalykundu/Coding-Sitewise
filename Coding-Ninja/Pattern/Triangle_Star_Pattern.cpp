// Problem statement link :  https://www.codingninjas.com/codestudio/problems/triangle-star-pattern_626546?leftPanelTab=0

#include <iostream>
using namespace std;

void printPattern(int N)
{
    // Write Your Code here
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    printPattern(n);
}

/*

O.P :

*
**
***
****


*/