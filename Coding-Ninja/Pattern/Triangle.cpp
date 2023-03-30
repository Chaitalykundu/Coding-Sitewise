// Problem statement link : https://www.codingninjas.com/codestudio/problems/triangle_6573690?leftPanelTab=0

void triangle(int n)
{
    // Write your code here
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

/*

O.P :

1
2 2
3 3 3

*/